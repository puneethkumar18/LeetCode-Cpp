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
    void solve(TreeNode* root,int &ans,int level,int &high) {
        if(root == NULL){
            return ;
        }
        if(level > high){
            high = level;
            ans = root->val;
        }
        solve(root->left,ans,level+1,high);
        solve(root->right,ans,level+1,high);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans = 0;
        int high = -1;
        solve(root,ans,0,high);
        return ans;
    }
};
