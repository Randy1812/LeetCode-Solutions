class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> hash;
        for(auto i:nums){
            hash[i]++;
        }
        int num=0;
        for(auto i:hash){
            num+=i.second*(i.second-1)/2;
        }
        return num;
    }
};
