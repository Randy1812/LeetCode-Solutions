class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> ar, vector<int> tp, int i){
        if(i>=ar.size()){
            ans.push_back(tp);
            return;
        }
        tp.push_back(ar[i]);
        solve(ans,ar,tp,i+1);
        tp.pop_back();
        solve(ans,ar,tp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tp;
        solve(ans,nums,tp,0);
        return ans;
    }
};
