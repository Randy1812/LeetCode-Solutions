class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=1;i<numRows;i++){
            int s = res[i-1].size();
            vector<int> temp;
            int prev=0;
            for(int j=0;j<s;j++){
                temp.push_back(prev+res[i-1][j]);
                prev=res[i-1][j];
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }
};
