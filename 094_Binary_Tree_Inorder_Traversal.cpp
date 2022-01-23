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
    vector<int> op;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> op;
        stack<TreeNode*> st;
        while(root||!st.empty()){
            if(root){
                st.push(root);
                root=root->left;
            }
            else{
                root=st.top();
                st.pop();
                op.push_back(root->val);
                root=root->right;
            }
        }
     for(auto i:op){
         cout<<i<<" ";
     }
    return op;
    }
};
