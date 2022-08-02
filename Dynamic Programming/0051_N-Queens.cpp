//TC O(n^3)
class Solution {
public:
    bool isValid(int row, int col, vector<string> board, int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isValid(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};


//TC O(n^2)
    class Solution {
public:
    void solve(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& left, vector<int>& ld, vector<int>& ud, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0){
                left[row]=1;
                ld[row+col]=1;
                ud[n-1+col-row]=1;
                board[row][col]='Q';
                solve(col+1,board,ans,left,ld,ud,n);
                left[row]=0;
                ld[row+col]=0;
                ud[n-1+col-row]=0;
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        vector<int> ld(2*n-1,0),ud(2*n-1,0),left(n,0);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,board,ans,left,ld,ud,n);
        return ans;
    }
};
};
