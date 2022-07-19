class Solution {
public:
    int numRookCaptures(vector<vector<char>>& matrix) {
        int r,c,ans=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(matrix[i][j]=='R'){
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        // UP
        for(int i=r;i>=0;i--){
            if(matrix[i][c]=='p'){
                ans++;
                break;
            }
            if(matrix[i][c]=='B'){
                break;
            }
        }
        // Down
        for(int i=r;i<8;i++){
            if(matrix[i][c]=='p'){
                ans++;
                break;
            }
            if(matrix[i][c]=='B'){
                break;
            }
        }
        // LEFT
        for(int i=c;i>=0;i--){
            if(matrix[r][i]=='p'){
                ans++;
                break;
            }
            if(matrix[r][i]=='B'){
                break;
            }
        }
        // RIGHT
        for(int i=c;i<8;i++){
            if(matrix[r][i]=='p'){
                ans++;
                break;
            }
            if(matrix[r][i]=='B'){
                break;
            }
        }
        return ans;
    }
};
