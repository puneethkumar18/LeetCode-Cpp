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
    void get(TreeNode* root, vector<int>& ans){
        if(root == NULL){
            return ;
        }
        get(root->left,ans);
        ans.push_back(root->val);
        get(root->right,ans);
    }
    void solve(TreeNode* root,vector<int> ans,int& i){
        if(root == NULL){
            return;
        }
        solve(root->left,ans,i);
        root->val = ans[i++];
        solve(root->right,ans,i);
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        get(root,ans);
        int i = 0;
        sort(ans.begin(),ans.end());
        solve(root,ans,i);

    }
};
