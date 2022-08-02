class Solution {
public:

    void solve(int ind, vector<int> ar, int target, vector<vector<int>>& ans, vector<int> tp){
        if(target==0){
            ans.push_back(tp);
            return;
        }
        for(int i=ind;i<ar.size();i++){
            if(i>ind && ar[i]==ar[i-1]) continue;
            if(ar[i]>target) break;
            tp.push_back(ar[i]);
            solve(i+1,ar,target-ar[i],ans,tp);
            tp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> tp;
        solve(0,candidates,target,ans,tp);
        return ans;
    }
};
