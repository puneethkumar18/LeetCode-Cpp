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
    void solve(TreeNode* root,int &ans,int max){
        if(root == NULL){
            return;
        }
        if(root->val >= max){
            max = root->val;
            ans = ans+1;
        }
        solve(root->left,ans,max);
        solve(root->right,ans,max);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        solve(root,ans,INT_MIN);
        return ans;
    }
};
