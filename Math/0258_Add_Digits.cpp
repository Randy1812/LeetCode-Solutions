class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        while(num>=10){
            rem=num%10;
            num/=10;
            num+=rem;
        }
        return num;
    }
};

class Solution {
public:
    int addDigits(int num) {
        return 1+(num-1)%9;
    }
};
