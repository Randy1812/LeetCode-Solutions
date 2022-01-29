class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ct=0;
        for(auto i:stones){
            if(jewels.find(i)<jewels.length())ct++;
        }
     return ct;
    }
};
