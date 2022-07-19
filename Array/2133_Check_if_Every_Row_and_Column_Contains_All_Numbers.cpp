class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        set<int> rows[n],cols[n],sub[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!rows[i].insert(matrix[i][j]).second||
                   !cols[j].insert(matrix[i][j]).second){
                    return false;
                }
            }
        }
        return true;
    }
};
