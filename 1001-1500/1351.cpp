/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {

private:
    TreeNode* solve(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if (original  ==  NULL){
            return NULL;
        }
        if(original->val == target->val){
            return cloned;
        }
        TreeNode* left = solve(original->left,cloned->left,target);
        TreeNode* right = solve(original->right,cloned->right,target);

        if(left){
            return left;
        }else{
            return right;
        }
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return solve(original,cloned,target);
    }
};
