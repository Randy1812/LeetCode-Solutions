//Greedy Solution
//Time Complexity O(n)
//Space Complexity O(1)
class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0,curr=0,farthest=0;
        for(int i=0;i<nums.size();i++){
            if(i>curr){
                curr=farthest;
                jumps++;
            }
            farthest=max(farthest,nums[i]+i);
        }
        return jumps;
    }
};

//Recursion Solution
//Time Complexity O(2^n)
//Space Complexity O(1)
//Auxiliary Space Complexity O(n)
class Solution {
public:
    int solve(int pos, vector<int>& nums){
        if(pos>=nums.size()-1) return 0;
        int minjumps = nums.size();
        for(int i=pos+1;i<=pos+nums[pos];i++){
            minjumps=min(minjumps,1+solve(i,nums));
        }
        return minjumps;
    }

    int jump(vector<int> nums){
        return solve(0,nums);
    }
};


//Memoization Solution
//Time Complexity O(n^2)
//Space Complexity O(n)

class Solution {
public:

    int solve(int pos, vector<int>& nums, vector<int>& dp){
        if(pos>=nums.size()-1) return 0;
        if(dp[pos]!=-1) return dp[pos];
        int minjumps=nums.size();
        for(int i=pos+1;i<=pos+nums[pos];i++){
            minjumps=min(minjumps,1+solve(i,nums,dp));
        }
        return dp[pos]=minjumps;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};

//Tabulation Solution
//Time Complexity O(n^2)
//Space Complexity O(n)
class Solution {
public:
    int solve(vector<int>& nums){
        int n=nums.size();
        vector<int> dp(n,n);
        dp[0]=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<=i+nums[i]&&j<n;j++){
                dp[j]=min(dp[j],1+dp[i]);
            }
        }
        return dp[n-1];
    }

    int jump(vector<int>& nums) {
        return solve(nums);
    }
};
