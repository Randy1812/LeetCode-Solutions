class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int r=accounts.size();
        int c=accounts[0].size();
        int max=0,tp;
        for(int i=0;i<r;i++){
            tp=0;
            for(int j=0;j<c;j++){
                tp+=accounts[i][j];
            }
            if(tp>max){
                max=tp;
            }
        }
        return max;
    }
};
