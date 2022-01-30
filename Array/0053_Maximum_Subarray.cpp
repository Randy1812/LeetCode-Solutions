class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cmax=nums[0],gmax=nums[0];
        for(int i=1;i<nums.size();i++){
            cmax=max(cmax+nums[i],nums[i]);
            gmax=max(gmax,cmax);
        }
     return gmax;
    }
};
