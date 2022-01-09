class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j,k=0;
        while(i<nums.size()){
            nums[k++]=nums[i];
            for(j=i;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    break;
                }
            }
            i=j;
        }
     return k;
    }
};
