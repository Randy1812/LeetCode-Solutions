class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int mx=0;
        for(auto i:candies){
            mx=max(mx,i);
        }
        for(int i=0;i<candies.size();i++){
            res.push_back(candies[i]+extraCandies>=mx);
        }
        return res;
    }
};
