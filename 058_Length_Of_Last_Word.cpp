class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,we;
        for(i=s.length()-1;!isalpha(s[i]);i--);
        we=i;
        while(i!=-1 && !isspace(s[i]) ){
            i--;
        }
        return we-i;
    }
};
