class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> cells(m,vector<int>(n,1));
        for(auto g:guards){
            cells[g[0]][g[1]]=0;
        }
        for(auto w:walls){
            cells[w[0]][w[1]]=2;
        }
        for(auto g:guards){
            int i=g[0];
            int j=g[1];
            cout<<"Guard is at"<<i<<" "<<j<<"\n";
            // Down
            for(int k=i+1;k<m;k++){
                if(cells[k][j]==0||cells[k][j]==2){
                    break;
                }
                cells[k][j]=3;
            }
            // Up
            for(int k=i-1;k>=0;k--){
                if(cells[k][j]==0||cells[k][j]==2){
                    break;
                }
                cells[k][j]=3;
            }
            // Left
            for(int k=j-1;k>=0;k--){
                if(cells[i][k]==0||cells[i][k]==2){
                    break;
                }
                cells[i][k]=3;
            }
            // Right
            for(int k=j+1;k<n;k++){
                if(cells[i][k]==0||cells[i][k]==2){
                    break;
                }
                cells[i][k]=3;
            }
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<cells[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans+=cells[i][j]==1;
            }
        }
        return ans;
    }
};
