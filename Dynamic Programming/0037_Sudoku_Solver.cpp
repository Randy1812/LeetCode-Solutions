class Solution {
public:
    bool valid(vector<vector<char>>& board, int i, int j, int val){
        for(int k=0;k<9;k++){
            if(board[i][k]==(char)(val+'0') || board[k][j]==(char)(val+'0')){
                return false;
            }
        }
        int x=3*(i/3);
        int y=3*(j/3);
        for(int l=x;l<x+3;l++){
            for(int m=y;m<y+3;m++){
                if(board[l][m]==(char)(val+'0'))return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board, int i, int j){
        if(i==9) return true;
        if(j==9) return solve(board,i+1,0);
        if(board[i][j]!='.') return solve(board,i,j+1);
        for(int no=1;no<=9;no++){
            if(valid(board,i,j,no)){
                board[i][j]=(char)(no+'0');
                bool ans=solve(board,i,j+1);
                if(ans) return true;
            }
        }
        board[i][j]='.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
       solve(board,0,0);
    }
};
