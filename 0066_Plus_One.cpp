class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int carry=0;
        int i=digits.size()-1;
        do{
           digits[i]+=carry;
           if(digits[i]==10){
               carry=1;
               digits[i]=0;
           }
            else{
                carry=0;
            }
            i--;
        }while(carry==1 && i>=0);
        if(carry==1 && i==-1){
            digits.insert(digits.begin(),1);
        }
    return digits;
    }
};
