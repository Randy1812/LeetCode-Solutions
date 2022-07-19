class Solution {
public:
    void solve(string &curr, vector<string>& res, int close, int open, int n){
        if(open==n && close==n){
            res.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
            solve(curr,res,close,open+1,n);
            curr.pop_back();
        }
        if(close<open){
            curr.push_back(')');
            solve(curr,res,close+1,open,n);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string> res;
        solve(curr,res,0,0,n);
        return res;
    }
};
