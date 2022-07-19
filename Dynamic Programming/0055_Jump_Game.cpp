class Solution {
public:
    bool solve(vector<int>& nums, int pos){
        if(pos==nums.size()-1) return true;
        for(int i=1;i<=nums[pos];i++){
            bool ans=solve(nums,pos+i);
            if(ans) return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        return solve(nums,0);
    }
};


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jmp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(jmp==0){
                return false;
            }
            jmp-=1;
            jmp=max(jmp,nums[i]);
        }
        return true;
    }
};
