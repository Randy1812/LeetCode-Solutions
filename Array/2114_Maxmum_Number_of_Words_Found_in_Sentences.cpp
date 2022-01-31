class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx=0;
        for(int i=0;i<sentences.size();i++){
            int tp=1;
            for(auto j:sentences[i]){
                if(isspace(j))tp++;
            }
            mx=max(mx,tp);
        }
        return mx;
    }
};
