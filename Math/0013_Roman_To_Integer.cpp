class Solution {
public:
    int romval(char c){
        int tp;
        switch(c){
                case 'I':tp=1;
                    break;
                case 'V':tp=5;
                    break;
                case 'X':tp=10;
                    break;
                case 'L':tp=50;
                    break;
                case 'C':tp=100;
                    break;
                case 'D':tp=500;
                    break;
                case 'M':tp=1000;
                    break;
            }
        return tp;
    }
    int romanToInt(string s) {
        int i,tp=0,num=0;
        for(i=0;i<s.length();i++){
            tp=romval(s[i]);
            if(i!=s.length()-1){
                if(romval(s[i+1])>tp){
                    tp*=-1;
                }
            }
            num+=tp;
        }
        return num;
    }
};
