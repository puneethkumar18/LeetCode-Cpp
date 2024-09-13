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
    void solve(TreeNode* root,int temp,int& ans){
        if(root == NULL){
            return ;
        }
        int ele = root->val;
        temp = temp*10;
        temp += ele;
        if(root->left == NULL && root->right == NULL){
            ans = temp+ans > INT_MAX ? ans:temp+ans;
            return ;
        }
        solve(root->left,temp,ans);
        solve(root->right,temp,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        solve(root,0,ans);
        return ans;
    }
};
