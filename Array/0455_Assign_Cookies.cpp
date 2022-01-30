class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ct=0;
        int i=0,j=0;
        while(j<s.size()&&i<g.size()){
            if(s[j]>=g[i]){
                ct++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
     return ct;
    }
};
