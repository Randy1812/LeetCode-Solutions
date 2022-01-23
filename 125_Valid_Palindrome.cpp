class Solution {
public:
    bool isPalindrome(string s) {
        string f="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                f+=tolower(s[i]);
            }
        }
        cout<<f;
        for(int i=0,j=f.length()-1;i<=j;i++,j--){
            if(f[i]!=f[j]){
                return false;
            }
        }
     return true;
    }
};
