class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      for(auto i:words){
          string rev=i;
          reverse(rev.begin(),rev.end());
          if(i==rev) return i;
      }
      return "";
    }
};
