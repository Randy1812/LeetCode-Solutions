class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,pos=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                pos=m;
                break;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(pos==-1) return {-1,-1};
        int i=pos,j=pos;
        while(i>=0 && nums[i]==target){i--;}
        while(j<nums.size() && nums[j]==target){j++;}
        i++;j--;
        return {i,j};
    }
};
