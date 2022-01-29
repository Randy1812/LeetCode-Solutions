class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> hash;
        int op;
        for(auto i:nums){
            hash[i]++;
        }
        for(auto i:hash){
            if(i.second>nums.size()/2) op=i.first;
        }
     return op;
    }
};
