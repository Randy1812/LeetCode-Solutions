class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> hash;
        for(auto i:s)
            hash[i]++;
        int ct=hash[s[0]];
        for(auto i:hash)
            if(i.second!=ct)
                return false;
        return true;
    }
};
