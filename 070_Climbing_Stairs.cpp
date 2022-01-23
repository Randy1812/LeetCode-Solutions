class Solution {
public:
    int climbStairs(int n) {
        int sum=0,a=1,b=0;
        for(int i=0;i<n;i++){
            sum=a+b;
            b=a;
            a=sum;
        }
    return a;
    }
};
