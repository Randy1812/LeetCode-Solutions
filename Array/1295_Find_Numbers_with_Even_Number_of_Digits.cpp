class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ct=0;
       for(auto i:nums){
           ct+=to_string(i).length()%2==0;
       }
        return ct;
    }
};
