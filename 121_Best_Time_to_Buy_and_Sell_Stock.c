class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mpr=0,mn=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mn=min(prices[i],mn);
            mpr=max(mpr,(prices[i]-mn));
        }
     return mpr;
    }
};
