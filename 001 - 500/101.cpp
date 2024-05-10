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
private:
    bool solve(TreeNode* left ,TreeNode* right){
        if(left ==  NULL && right == NULL){
            return true;
        }
       
        if(!left){
            return false;
        }
        if(!right){
            return false;
        }
        if(left->val != right->val ){
            return false;
        }

        bool leftNode = solve(left->left,right->right);
        bool rightNode = solve(left->right,right->left);

        return leftNode&&rightNode;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};
