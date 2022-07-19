//Backtracking Solution
class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& res, vector<int>& curr,int s){
        if(curr.size()==s){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            curr.push_back(nums[i]);
            int val = nums[i];
            nums.erase(nums.begin()+i);
            solve(nums,res,curr,s);
            nums.insert(nums.begin()+i,val);
            curr.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        solve(nums,res,cur,nums.size());
        return res;
    }
};


//Swapping Solution
    void solve(vector<int> nums, vector<vector<int>>& res, int pos){
        if(pos==nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++){
            swap(nums[i],nums[pos]);
            solve(nums,res,pos+1);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> res;
        solve(nums,res,0);
        return res;
    }
