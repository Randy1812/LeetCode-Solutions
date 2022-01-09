class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,l=200;
        string tp,res;
        bool sub=true;
        for(auto tmp:strs){
            if(tmp.length()<l){
                tp=tmp;
                l=tp.length();
            }
        }
        for(i=1;i<=tp.length();i++){
            for(j=0;j<strs.size();j++){
                if(strs[j].substr(0,i) != tp.substr(0,i)){
                    sub=false;
                }
            }
            if(sub){
                res=tp.substr(0,i);
            }
        }
        return res;
    }
};
