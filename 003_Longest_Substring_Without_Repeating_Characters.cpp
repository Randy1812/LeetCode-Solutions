class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n<=1) return n;
        int start=0,end=0,mx=0;
        vector<int> hash(256,-1);
        while(end<n){
            if(hash[s[end]]!=-1){
                start=max(start,hash[s[end]]+1);
            }
            hash[s[end]]=end;
            mx=max(mx,end-start+1);
            end++;
        }
     return mx;
    }

};
