class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int i=0,ct1=0,ct2=0;
        while(i<n/2){
            char tp1=tolower(s[i]);
            char tp2=tolower(s[i+n/2]);
            if(tp1=='a'||tp1=='e'||tp1=='i'||tp1=='o'||tp1=='u')ct1++;
            if(tp2=='a'||tp2=='e'||tp2=='i'||tp2=='o'||tp2=='u')ct2++;
            i++;
        }
        return ct1==ct2;
    }
};
