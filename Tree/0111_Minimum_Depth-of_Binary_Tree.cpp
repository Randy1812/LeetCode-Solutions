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
    void solve(TreeNode* root, int& mn, int lvl){
        if(lvl>mn){
            return;
        }
        if(!root->left && !root->right){
            mn = min(mn,lvl);
            return;
        }
        if(root->left){solve(root->left,mn,lvl+1);}
        if(root->right){solve(root->right,mn,lvl+1);}
    }
    int minDepth(TreeNode* root) {
        if(!root){return 0;}
        int min=INT_MAX;
        solve(root,min,1);
        return min;
    }
};
