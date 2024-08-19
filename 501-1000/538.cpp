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
    void solve(TreeNode* &root,int& highest){
        if(root == NULL){
            return;
        }
        solve(root->right,highest);
        highest = highest + root->val;
        root->val = highest;
        solve(root->left,highest);
    }
    TreeNode* convertBST(TreeNode* root) {
        int highest = 0;
        solve(root,highest);
        return root;
    }
};
