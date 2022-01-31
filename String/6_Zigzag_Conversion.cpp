class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string res="";
        int step=2*numRows-2;
        for(int i=0;i<numRows;i++){
            if(i==0 || i==numRows-1){
                for(int j=i;j<s.size();j+=step){
                    res+=s[j];
                }
            }
            else{
                int j=i;
                bool flag=true;
                int step1=2*(numRows-1-i);
                int step2=step-step1;
                while(j<s.length()){
                    res+=s[j];
                    if(flag){
                        j+=step1;
                    }
                    else{
                        j+=step2;
                    }
                    flag=!flag;
                }
            }
        }
        return res;
    }
};
