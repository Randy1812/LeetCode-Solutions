class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        if(startPos==homePos) return 0;
        int ans=0;
        while(startPos[0]!=homePos[0]){
            if(startPos[0]<homePos[0]){
                startPos[0]++;
            }
            else{
                startPos[0]--;
            }
            ans+=rowCosts[startPos[0]];
        }
        while(startPos[1]!=homePos[1]){
            if(startPos[1]<homePos[1]){
                startPos[1]++;
            }
            else{
                startPos[1]--;
            }
            ans+=colCosts[startPos[1]];
        }
        return ans;
    }
};
