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
    TreeNode* solve(TreeNode* root, int key){
        if(root == NULL){
            return NULL;
        }
        root->left = solve(root->left,key);
        root->right = solve(root->right,key);
        if(root->val == key){
            if(root->right == NULL){
                root = root->left;
            }else{
                TreeNode* temp = root->right;
                while(temp->left != NULL){
                    temp = temp->left;
                }
                temp->left = root->left;
                root = root->right;
            }
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        return solve(root,key);
    }
};
