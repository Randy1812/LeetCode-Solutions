//Recursive Solution 0ms
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        if(columnNumber<=26){
            return res+(char)('A'+columnNumber-1);
        }

        long long x=(columnNumber-1)/26;
        res=convertToTitle(x);
        long long y=columnNumber-26*x-1;
        res+=(char)('A'+y);
        return res;
    }
};

class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        while(n){
            res=(char)((n-1)%26+'A')+res;
            n=(n-1)/26;
        }
        return res;
    }
};


