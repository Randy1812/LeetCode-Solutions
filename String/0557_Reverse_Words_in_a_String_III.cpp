class Solution {
public:
    string reverseWords(string s) {
       int start=0,end=0;
        for(int i=0;i<=s.length();i++){
            ++end;
            if(s[i]==' '||i==s.length()){
                reverse(s.begin()+start,s.begin()+end-1);
                start=i+1;
            }
        }
     return s;
    }
};
