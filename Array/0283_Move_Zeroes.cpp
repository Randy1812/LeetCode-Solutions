class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[pos++]=nums[i];
            }
        }
        for(i=pos;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
