class Solution {
public:
    int minPartitions(string n) {
      int mx=-1;
      for(auto i:n){
          mx=max(mx,(int)i-48);
      }
     return mx;
    }
};
