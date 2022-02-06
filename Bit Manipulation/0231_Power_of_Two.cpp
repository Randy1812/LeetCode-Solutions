class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        return n&&(!(n&(n-1)));
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        int ct=0;
        while(n){
            if(n&1)ct++;
            n=n>>1;
        }
        return ct==1;
    }
};
