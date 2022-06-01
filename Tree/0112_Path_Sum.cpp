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
    vector<int> visited;
    bool hasPathSum(TreeNode* root, int targetSum, int sum=0) {
        if(root){
            sum+=root->val;
        }
        else{
            return false;
        }
        if(sum==targetSum && !root->left && !root->right){
            return true;
        }
        else{
            if(root->left)
                if(hasPathSum(root->left,targetSum,sum))
                    return true;
            if(root->right)
                if(hasPathSum(root->right,targetSum,sum))
                    return true;
        }
        return false;
    }
};
