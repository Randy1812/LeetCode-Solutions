class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<bool> s1(101);
        vector<bool> s2(101);
        vector<bool> s3(101);

        vector<int> res;

        for(auto i:nums1) s1[i]=true;
        for(auto i:nums2) s2[i]=true;
        for(auto i:nums3) s3[i]=true;

        for(int i=0;i<101;i++){
            if(s1[i]&&s2[i] || s1[i]&&s3[i] || s2[i]&&s3[i]) res.push_back(i);
        }

        return res;
    }
};
