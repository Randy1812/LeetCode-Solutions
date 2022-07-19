//Memoization Solution
class Solution {
private:
    int m,n;
public:
    int solve(vector<vector<int>> g, vector<vector<int>>& dp, int x, int y){
        if(x<0 || x>=m || y<0 ||y>=n || g[x][y]==1) return 0;
        if(x==m-1 && y==n-1) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        int down=solve(g,dp,x+1,y);
        int right=solve(g,dp,x,y+1);
        return dp[x][y]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m=obstacleGrid.size();
        n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(obstacleGrid,dp,0,0);
    }
};
