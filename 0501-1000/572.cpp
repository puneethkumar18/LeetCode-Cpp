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
    bool isIdentical(TreeNode* r1,TreeNode* r2){
        if(r1 == NULL  && r2 == NULL){
            return true;
        }
        if(r1 == NULL && r2 != NULL){
            return false;
        }

        if(r1 != NULL && r2 == NULL){
            return false;
        }
        if(r1->val != r2->val){
            return false;
        }
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right,r2->right);

        return left&right;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL){
            return false;
        }
        bool ans ;
        if(root->val  == subRoot->val){
            ans = isIdentical(root,subRoot);
        }
        bool left = isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);
        return left || right || ans;
    }
};
