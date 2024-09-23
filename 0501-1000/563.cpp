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
    int sum(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = sum(root->left);
        int right = sum(root->right);
        
        return left+right+root->val;
    }
    int solve(TreeNode*& root){
        if(root == NULL){
            return 0;
        }
        int left =  solve(root->left);
        int right = solve(root->right);
        
        int res = left+right+root->val;
        root->val = abs(left-right);
        return res;
    }
    int findTilt(TreeNode* root) {
        solve(root);
        return sum(root);
    }
};
