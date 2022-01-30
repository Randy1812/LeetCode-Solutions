class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        if(n<3)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1,target=-nums[i];
            if(i==0 ||(i>0 && nums[i]!=nums[i-1])){
                while(j<k){
                    if(nums[j]+nums[k]==target){
                        res.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1])j++;
                        while(j<k && nums[k]==nums[k-1])k--;
                        j++;k--;
                    }
                    else if(nums[j]+nums[k]<target){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
     return res;
    }
};
