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
    void solve(TreeNode* root, vector<vector<int>>& ans, vector<int>& curr){
        if(root->left==NULL && root->right==NULL){
            ans.push_back(curr);
            return;
        }
        if(root->left){
            curr.push_back(root->left->val);
            solve(root->left,ans,curr);
            curr.pop_back();
        }
        if(root->right){
            curr.push_back(root->right->val);
            solve(root->right,ans,curr);
            curr.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<vector<int>> ans;
        vector<int> curr;
        curr.push_back(root->val);
        solve(root,ans,curr);
        for(auto i:ans){
            string tp="";;
            for(auto j:i){
                tp.append(to_string(j));
                tp.append("->");
            }
            res.push_back(tp.substr(0,tp.length()-2));
        }
        return res;
    }
};
