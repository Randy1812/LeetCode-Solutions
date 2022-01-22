class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0) return 0;
        int len=haystack.length()-needle.length();
        if(len<0){
            return -1;
        }
        for(int i=0;i<=len;i++){
            if(needle.compare(haystack.substr(i,needle.length()))==0){
                return i;
            }
        }
        return -1;
    }
};
