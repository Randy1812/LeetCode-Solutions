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
    int Height(TreeNode* root, bool& ans){
        if(root==NULL) return 0;
        int x = root->left?Height(root->left,ans):0;
        int y = root->right?Height(root->right,ans):0;
        if(abs(x-y)>1) ans=false;
        return 1+max(x,y);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool ans=true;
        Height(root,ans);
        return ans;
    }
};
