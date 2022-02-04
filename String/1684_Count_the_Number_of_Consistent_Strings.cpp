class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=0;
        for(auto i:words){
            bool cons=true;
            for(auto j:i){
                if(find(allowed.begin(),allowed.end(),j)==allowed.end()) cons=false;
            }
            if(cons) res++;
        }
        return res;
    }
};
