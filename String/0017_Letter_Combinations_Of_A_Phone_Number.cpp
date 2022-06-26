class Solution {
public:
    void solve(string &digits, vector<vector<char>> &lt, int pos, string str, vector<string> &ans){
        if(str.length()==digits.length()){
            if(str!="")
                ans.push_back(str);
            return;
        }
        int d=digits[pos]-'0';
        for(int i=0;i<lt[d].size();i++){
            str+=lt[d][i];
            solve(digits,lt,pos+1,str,ans);
            str=str.substr(0,str.size()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> lt = {
            {},
            {},
            {'a','b','c'},
            {'d','e','f'},
            {'g','h','i'},
            {'j','k','l'},
            {'m','n','o'},
            {'p','q','r','s'},
            {'t','u','v'},
            {'w','x','y','z'}
        };
        vector<string> ans;
        solve(digits,lt,0,"",ans);
        return ans;
    }
};
