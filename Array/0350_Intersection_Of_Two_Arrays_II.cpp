class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()>nums1.size()) return intersect(nums2,nums1);
        vector<int> res;
        map<int,int> hash;
        for(auto i:nums1){
            hash[i]+=1;
        }
        for(auto i:nums2){
            if(hash.find(i)!=hash.end() && hash[i]!=0){
                res.push_back(i);
                hash[i]-=1;
            }
        }
     return res;
    }
};
