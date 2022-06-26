//Recursion Solution

class Solution {
public:
    long long solve(vector<vector<int>> grid, int i, int j){
        if(i==0 && j==0){
            return grid[i][j];
        }
        if(i<0 || j<0){
            return INT_MAX;
        }
        long long left=grid[i][j]+solve(grid,i-1,j);
        long long up=grid[i][j]+solve(grid,i,j-1);
        return min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=0;
        return solve(grid,grid.size()-1,grid[0].size()-1);
    }
};

//Memoization

class Solution {
public:
    int solve(vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){
        if(m==0 && n==0){
            return dp[m][n]=grid[m][n];
        }
        if(n<0 || m<0){
            return 1e8;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int left=grid[m][n]+solve(grid,m,n-1,dp);
        int up=grid[m][n]+solve(grid,m-1,n,dp);
        return dp[m][n]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(grid,m-1,n-1,dp);
    }
};

//Tabulation

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n));
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=grid[i][0];
            dp[i][0]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++){
            sum+=grid[0][i];
            dp[0][i]=sum;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=grid[i][j]+min(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m-1][n-1];
    }
};
