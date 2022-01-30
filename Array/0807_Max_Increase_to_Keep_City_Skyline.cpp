class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> rmax(n,0),cmax(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cmax[i]=max(cmax[i],grid[i][j]);
                rmax[j]=max(rmax[j],grid[i][j]);
            }
        }
     int sum=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             sum+=min(rmax[i],cmax[j])-grid[i][j];
         }
     }
     return sum;
    }
};
