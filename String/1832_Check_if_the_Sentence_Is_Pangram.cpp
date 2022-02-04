//0ms
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alph(26);
        for(auto i:sentence) alph[i-'a']++;
        for(auto i:alph)
            if(i==0)
                return false;
        return true;
    }
};
