/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(vector<double>& res, vector<TreeNode*> curr){
        if(curr.empty()) return;
        vector<TreeNode*> next;
        vector<int> vals;
        for(int i=0;i<curr.size();i++){
            vals.push_back(curr[i]->val);
            if(curr[i]->left) next.push_back(curr[i]->left);
            if(curr[i]->right) next.push_back(curr[i]->right);
        }
        double avg;
        for(auto i:vals) avg+=i;
        avg/=(double)vals.size();
        res.push_back(avg);
        solve(res,next);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<TreeNode*> curr={root};
        vector<double> ans;
        solve(ans,curr);
        return ans;
    }
};
