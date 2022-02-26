class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> srt=heights;
        sort(srt.begin(),srt.end());
        int ct=0;
        for(int i=0;i<srt.size();i++){
            if(heights[i]!=srt[i])ct++;
        }
        return ct;
    }
};
