class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxalt=0,curralt=0;
        for(auto i:gain){
            curralt+=i;
            maxalt=max(maxalt,curralt);
        }
        return maxalt;
    }
};
