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
    void solve(TreeNode* root, map<int,vector<int> ,greater<int>>& m,int level){
        if(root == NULL){
            return ;
        }
        m[level].push_back(root->val);
        solve(root->left,m,level+1);
        solve(root->right,m,level+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        map<int,vector<int> ,greater<int>> m;
        vector<vector<int>> ans;

        solve(root,m,0);

        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
