class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1],i=nums.size()-2,ct=1;
        while(ct!=3 && i>=0){
            if(nums[i]!=max){
                max=nums[i];
                ct++;
                i--;
            }
            else{
                i--;
            }
        }
     if(ct!=3){
         return nums[nums.size()-1];
     }
     return max;
    }
};
