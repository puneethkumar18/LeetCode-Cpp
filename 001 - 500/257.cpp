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
    void path(TreeNode* &root,string st,vector<string> &ans){
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(st + to_string(root->val));
            return ;
        }
        st = st + to_string(root->val) + "->" ;
        path(root->left,st,ans);
        path(root->right,st,ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        path(root,"",ans);
        return ans;
    }
};
