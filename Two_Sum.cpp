class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        vector<int> res;
        int max=-1,req;
        for(auto tp:nums){
            if(tp>max){max=tp;}
        }
        vector<int> arr(max+1,0);
        for(i=0;i<nums.size();i++){
            req=target-nums[i];
            if(arr[req]!=0 && req>=0){
                res.push_back(arr[i]);
                res.push_back(req);
            }
            arr[nums[i]]++;
        }
        return res;
    }
};
