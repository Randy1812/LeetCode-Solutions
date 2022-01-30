//O(n) Hash Map
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(auto i:nums){
            hash[i]+=1;
        }
        for(auto i:hash){
            if(i.second==1){
                return i.first;
            }
        }
     return 0;
    }
};

//O(n) Bit Manipulation
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto i: nums)
            res^=i;
        return res;
    }
};
