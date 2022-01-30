class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int i=0;
        vector<int> res;
        while(i<nums.size()){
            res.insert(res.begin()+index[i],nums[i]);
            i++;
        }
        return res;
    }
};
