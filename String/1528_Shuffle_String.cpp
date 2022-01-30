class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string op(indices.size(),' ');
        for(int i=0;i<indices.size();i++){
            op[indices[i]]=s[i];
        }
        return op;
    }
};
