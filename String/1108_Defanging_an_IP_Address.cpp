class Solution {
public:
    string defangIPaddr(string address) {
        string op;
        for(auto i:address){
            if(i!='.'){
                op+=i;
            }
            else{
                op+="[.]";
            }
        }
     return op;
    }
};
