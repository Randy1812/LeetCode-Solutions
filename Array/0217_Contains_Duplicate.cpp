class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> num;
        for(auto i:nums){
            num.insert(i);
        }
        return nums.size()>num.size();
    }
};
