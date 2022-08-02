class Solution {
public:
    vector<int> grayCode(int n) {
        int num=(1<<(n-1));
        cout<<num;
        vector<int> ans;
        int tp;
        for(int i=0;i<(1<<n);i++){
            tp=i>>1;
            ans.push_back(i^tp);
        }
        return ans;
    }
};
