//0ms
class Solution {
public:
    bool checkString(string s) {
        int ar=INT_MIN,bl=INT_MAX;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') ar=max(ar,i);
            if(s[i]=='b') bl=min(bl,i);
        }
        return ar<bl;
    }
};
