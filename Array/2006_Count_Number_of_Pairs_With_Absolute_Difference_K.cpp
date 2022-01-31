class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ct=0;
        vector<int> hash(101);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=k+1;i<101;i++){
            ct+=hash[i]*hash[i-k];
        }
        return ct;
    }
};
