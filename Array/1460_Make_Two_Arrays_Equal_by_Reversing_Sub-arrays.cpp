class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> cnt;
        for(auto i:arr){
            cnt[i]+=1;
        }
        for(auto i:target){
            cnt[i]-=1;
        }
        for(auto i:cnt){
            if(i.second<0) return false;
        }
        return true;
    }
};
