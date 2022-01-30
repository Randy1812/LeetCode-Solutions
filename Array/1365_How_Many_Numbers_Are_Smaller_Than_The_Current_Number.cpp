class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> hash(101),res;
        for(auto i:nums){
            hash[i]++;
        }
        for(int i=1;i<hash.size();i++){
            hash[i]+=hash[i-1];
        }
        for(auto i:nums){
            if(i==0){
                res.push_back(0);
            }
            else{
                res.push_back(hash[i-1]);
            }
        }
     return res;
    }
};
