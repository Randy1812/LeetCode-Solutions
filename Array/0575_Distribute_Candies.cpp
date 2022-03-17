class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int,int> hash;
        for(auto i:candyType){
            hash[i]++;
        }
        return hash.size()>candyType.size()/2?candyType.size()/2:hash.size();
    }
};
