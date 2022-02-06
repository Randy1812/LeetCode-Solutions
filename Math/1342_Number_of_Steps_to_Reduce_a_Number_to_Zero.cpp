class Solution {
public:
    int numberOfSteps(int num) {
        int ans=num?0:1;
        while(num){
            ans+=(num&1)+1;
            num>>=1;
        }
        return ans-1;
    }
};

class Solution {
public:
    int numberOfSteps(int num) {
        return num?log2(num)+bitset<32>(num).count():0;
    }
};
