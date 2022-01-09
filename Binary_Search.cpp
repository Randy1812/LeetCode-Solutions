class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
        int m;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
};
