class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long ans=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int currsum = nums[i]+nums[j]+nums[k];
                ans=abs(currsum-target)<abs(ans-target)?currsum:ans;
                if(currsum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};
