class Solution {
public:
    int reverse(int x) {
        long long num=abs(x),rev=0,rem;
        while(num!=0){
            rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(x<0)rev*=-1;
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return rev;
    }
};
