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
private:
    bool solve(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        if (root->left != NULL) {
            if (root->val != root->left->val) {
                return false;
            }
        }
        if (root->right != NULL) {
            if (root->val != root->right->val) {
                return false;
            }
        }
        bool left = solve(root->left);
        bool right = solve(root->right);

        return left && right;
    }

public:
    bool isUnivalTree(TreeNode* root) { return solve(root); }
};
