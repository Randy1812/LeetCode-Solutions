class Solution {
public:
    void allcomb(vector<int>& candidates, int target, vector<int> curr, int sum, int curindex, vector<vector<int>>& ans){
        if(sum>target){
            return;
        }
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        for(int i=curindex;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            sum+=candidates[i];
            allcomb(candidates,target,curr,sum,i,ans);
            curr.pop_back();
            sum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        allcomb(candidates,target,curr,0,0,ans);
        return ans;
    }
};
