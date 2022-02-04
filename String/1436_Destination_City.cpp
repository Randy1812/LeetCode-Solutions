class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> all;
        for(auto i:paths){
            all[i[0]]=i[1];
        }
        for(auto i:all){
            if(all.find(i.second)==all.end()){
                return i.second;
            }
        }
        return "";
    }
};
