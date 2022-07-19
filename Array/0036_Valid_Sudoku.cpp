class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> rows[9],cols[9],sub[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else{
                    if(!rows[i].insert(board[i][j]).second||
                       !cols[j].insert(board[i][j]).second||
                       !sub[3*(i/3)+j/3].insert(board[i][j]).second){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
