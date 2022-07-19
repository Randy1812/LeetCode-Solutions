//Backtacking Solution
class Solution {
public:
    void solve(int m, int n, int x, int y, int& ans){
        if(x==m-1 && y==n-1){
            ans++;
            return;
        }
        if(x<m-1)solve(m,n,x+1,y,ans);
        if(y<n-1)solve(m,n,x,y+1,ans);
    }
    int uniquePaths(int m, int n) {
        int ans=0;
        solve(m,n,0,0,ans);
        return ans;
    }
};

//Tabulation Solution
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
        return ans[m-1][n-1];
    }
};

