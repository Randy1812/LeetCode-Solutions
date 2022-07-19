class Solution {
public:
    void solve(vector<vector<int>>& res, int k, int n, vector<int>& curr, int st){
        if(curr.size()==k){
            res.push_back(curr);
            return;
        }
        for(int i=st;i<=n;i++){
            if(find(curr.begin(),curr.end(),i)==curr.end()){
                curr.push_back(i);
                solve(res,k,n,curr,i+1);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(res,k,n,curr,1);
        return res;
    }
};
