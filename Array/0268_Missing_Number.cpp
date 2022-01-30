//O(n)  Difference Based Solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]-i!=0) return nums[i]-1;
        }
     return nums.size();
    }
};

//O(n) Math formula Solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        return n*(n+1)/2 - sum;
    }
};

//O(n) Bit Manipulation Solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
            ans^=i;
            ans^=nums[i];
        }
     return ans;
    }
};
