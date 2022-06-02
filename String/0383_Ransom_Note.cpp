class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> r,m;
        for(auto i:ransomNote){
            r[i]+=1;
        }
        for(auto i:magazine){
            m[i]+=1;
        }
        if(r.size()>m.size()) return false;
        else{
            for(auto i:r){
                if(r[i.first]>m[i.first]){return false;}
            }
        }
        return true;
    }
};
