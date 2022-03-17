class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0,mx=INT_MIN;
        for(i=1;i<colors.size();i++){
            if(colors[i] != colors[0]) mx=i;
        }
       for(i=colors.size()-2;i>=0;i--){
           if(colors[colors.size()-1]!=colors[i]){
               mx=colors.size()-1-i>mx?colors.size()-i-1:mx;
           }
       }
        return mx;
    }
};
