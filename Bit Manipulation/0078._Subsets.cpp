//TC O(2^n*n)
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<1<<n;i++){
            vector<int> tp;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    tp.push_back(nums[j]);
                }
            }
            ans.push_back(tp);
        }
        return ans;
    }
};
