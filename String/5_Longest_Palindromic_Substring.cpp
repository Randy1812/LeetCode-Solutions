class Solution {
public:
    int expand(string s, int left, int right){
        while(left>=0 && right<=s.size() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s==""){
            return 0;
        }
        string res;
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            int lo=expand(s,i,i);
            int le=expand(s,i,i+1);
            int len=max(lo,le);
            if(len>end-start){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        for(int i=start;i<=end;i++){
            res+=s[i];
        }
        return res;
    }
};
