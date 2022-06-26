
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_pts=accumulate(cardPoints.begin(),cardPoints.end(),0);
        cout<<total_pts<<"\n";
        if(k>=cardPoints.size()){
            return total_pts;
        }
        int i=0,j=cardPoints.size()-k,ans=0,g_ans=0;
        for(int l=i;l<j;l++){
            ans+=cardPoints[l];
        }
        g_ans=max(g_ans,(total_pts-ans));
        cout<<ans<<" "<<g_ans<<"\n";
        while(j<cardPoints.size()){
            cout<<cardPoints[j]<<" "<<cardPoints[i]<<" ";
            ans+=cardPoints[j++];
            ans-=cardPoints[i++];
            g_ans=max(g_ans,(total_pts-ans));
            cout<<ans<<" "<<g_ans<<"\n";
        }
        return g_ans;
    }
};
