class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int i,ct=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i]=-1;
                ct++;
            }
        }
        sort(nums.begin(),nums.end());
        nums.erase(nums.begin(),nums.begin()+ct);
        return nums.size();
    }
};
