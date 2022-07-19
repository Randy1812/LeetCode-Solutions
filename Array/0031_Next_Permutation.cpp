// For Example: 2,3,6,5,4,1
// Step 1, from right to left, find the first number which not increase in a ascending order. In this case which is 3.
// Step 2, here we can have two situations:
// We cannot find the number, all the numbers increasing in a ascending order. This means this permutation is the
// last permutation, we need to rotate back to the first permutation. So we reverse the whole array, for example 6,5,4,3,2,1 we turn it to 1,2,3,4,5,6.
// We can find the number, then the next step, we will start from right most to leftward, try to find the first number which is larger than 3, in this case it is 4.
// Then we swap 3 and 4, the list turn to 2,4,6,5,3,1.
// Last, we reverse numbers on the right of 4, we finally get 2,4,1,3,5,6.
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i,j;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) break;
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i]) break;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
