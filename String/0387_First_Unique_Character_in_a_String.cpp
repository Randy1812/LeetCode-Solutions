class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==0){
                mp[s[i]]=i+1;
            }
            else if(mp[s[i]]>=1){
                mp[s[i]]=-1;
            }
            else if(mp[s[i]]==-1){
                continue;
            }
        }
        for(auto i:s){
            if(mp[i]>=1){
                return mp[i]-1;
            }
        }
        return -1;
    }
};
