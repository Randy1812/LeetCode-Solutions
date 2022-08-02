class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> ar, vector<int> tp, int pos){
        ans.push_back(tp);
        for(int i=pos;i<ar.size();i++){
            if(i>pos && ar[i]==ar[i-1]) continue;
            tp.push_back(ar[i]);
            solve(ans,ar,tp,i+1);
            tp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tp;
        sort(nums.begin(),nums.end());
        solve(ans,nums,tp,0);
        return ans;
    }
};
