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
    int height(TreeNode*& root) {
        if (root == NULL) {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        return max(left, right) + 1;
    }

    int diameterOfTree(TreeNode*& root) {
        if (root == NULL) {
            return 0;
        }

        int op1 = diameterOfTree(root->left);
        int op2 = diameterOfTree(root->right);
        int op3 = height(root->left) + 1 + height(root->right);

        return max(op1, max(op2, op3));
    }

public:
    int diameterOfBinaryTree(TreeNode* root) { 
        return diameterOfTree(root)-1; 
        }
};
