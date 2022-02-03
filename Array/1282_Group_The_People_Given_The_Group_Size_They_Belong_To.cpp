class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        map<int,vector<int>> hash;
        for(int i=0;i<groupSizes.size();i++){
            hash[groupSizes[i]].push_back(i);
        }
        for(auto i:hash){
            vector<int> tmp;
            for(auto j:i.second){
                tmp.push_back(j);
                if(tmp.size()==i.first){
                    res.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        return res;
    }
};
