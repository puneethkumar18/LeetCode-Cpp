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
    bool solve(TreeNode* root, int targetSum,int currentSum){
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            currentSum += root->val;
            if(currentSum == targetSum){
                return true;
            }else{
                return false;
            }
        }
        currentSum += root->val;
        bool left = solve(root->left,targetSum,currentSum);
        bool right = solve(root->right,targetSum,currentSum);

        if(left == true || right == true){
            return true;
        }
        return false;

    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum,0);
    }
};
