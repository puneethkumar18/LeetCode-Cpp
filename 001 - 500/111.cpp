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
    int depth(TreeNode* & root){
        if(root == NULL){
            return -1;
        }
        int left = depth(root->left);
        int right = depth(root->right);
        int diff ;
        if(left != -1 && right != -1){
            diff = min(left,right)+1;
        }else{
            if(left == -1 && right == -1){
                diff  = 1;
            }else if(left == -1 && right != -1){
                diff = right+1;
            }else if(right == -1 && left != -1){
                diff = left+1;
            }
        }
        
        return diff;

    }
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        return depth(root);
    }
};
