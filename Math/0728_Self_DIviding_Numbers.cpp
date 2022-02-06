class Solution {
public:
    bool check(int n){
        int num=n;
        while(num>0){
            int tp=num%10;
            if(tp==0 || n%tp!=0)return false;
            num/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            if(check(i)) res.push_back(i);
        }
        return res;
    }
};
