class Solution {
public:
    int findpivot(vector<int> nums){
        int l=0;
        int h=nums.size()-1;
        if(nums[l]<nums[h]){
            return -1;
        }
        while(l<h){
            int m=l+(h-l)/2;
            if(nums[m]>nums[m+1]){
                return m;
            }
            else if(nums[m]<nums[l]){
                h=m;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
    int findMin(vector<int>& nums) {
        int pv=findpivot(nums);
        if(pv==-1){
            return nums[0];
        }
        return nums[(pv+1)%nums.size()];
    }
};
