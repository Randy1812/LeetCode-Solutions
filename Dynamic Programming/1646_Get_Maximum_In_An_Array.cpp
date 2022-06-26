class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0||n==1){
            return n;
        }
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=1;i<=n/2;i++){
            dp[i*2]=dp[i];
            if(i*2+1<=n){
             dp[i*2+1]=dp[i]+dp[i+1];
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};
