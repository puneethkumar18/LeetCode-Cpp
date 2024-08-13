/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,int &high) {
        if (root == NULL) {
            return;
        }
        solve(root->right, high);
        high = root->val + high;
        root->val = high;
        solve(root->left, high);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int high = 0;
        solve(root,high);
        return root;
    }
};
