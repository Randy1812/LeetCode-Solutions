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
    void solve(TreeNode* root, vector<vector<int>>& ans, vector<int>& curr,int sum, int target){
        if(!root->left && !root->right){
            if(sum==target)
                ans.push_back(curr);
            return;
        }
        if(root->left){
            curr.push_back(root->left->val);
            sum+=root->left->val;
            solve(root->left,ans,curr,sum,target);
            sum-=root->left->val;
            curr.pop_back();
        }
        if(root->right){
            curr.push_back(root->right->val);
            sum+=root->right->val;
            solve(root->right,ans,curr,sum,target);
            sum-=root->right->val;
            curr.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> curr{root->val};
        solve(root,ans,curr,root->val,targetSum);
        return ans;
    }
};
