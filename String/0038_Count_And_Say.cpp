class Solution {
public:

    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string ans="",s = countAndSay(n-1);
        char ch=s[0];
        int ct=1,i;
        for(i=1;i<s.length();i++){
            if(s[i]==ch){
                ct++;
            }
            else{
                ans+=(char)(ct+'0');
                ans+=ch;
                ch=s[i];
                ct=1;
            }
        }
        ans+=(char)(ct+'0');
        ans+=ch;
        ch=s[i];
        ct=1;
        cout<<ans;
        return ans;
    }

};
