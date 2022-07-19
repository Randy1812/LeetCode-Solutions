class Solution {
public:
    int minDeletions(string s) {
        vector<int> mp(26,0);
        for(auto i:s) mp[(int)(i-'a')]++;
        sort(mp.begin(),mp.end());
        int del=0;
        for(int i=24;i>=0;i--){
            if(mp[i]==0) break;
            if(mp[i]>=mp[i+1]){
                int prev=mp[i];
                mp[i]=max(0,mp[i+1]-1);
                del+=prev-mp[i];
            }
        }
        return del;
    }
};
