class Solution {
public:
    string truncateSentence(string s, int k) {
        int ct=0,i;
        for(i=0;i<s.length();i++){
            if(s[i]==' ') ct++;
            if(ct==k){
                break;
            }
        }
        return s.substr(0,i);
    }
};
