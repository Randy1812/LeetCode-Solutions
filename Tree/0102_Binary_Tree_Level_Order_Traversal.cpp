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
    void solve(vector<TreeNode*> curr, vector<vector<int>>& res){
        if(curr.size()==0){return;}
        vector<TreeNode*> next;
        vector<int> val;
        for(int i=0;i<curr.size();i++){
            val.push_back(curr[i]->val);
            if(curr[i]->left){next.push_back(curr[i]->left);}
            if(curr[i]->right){next.push_back(curr[i]->right);}
        }
        res.push_back(val);
        solve(next,res);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){return res;}
        vector<TreeNode*> curr = {root};
        solve(curr,res);
        return res;
    }
};
