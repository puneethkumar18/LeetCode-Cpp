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
    void solve(TreeNode* root,map<int,int> &ans,int level){
        if(root == NULL){
            return ;
        }
        ans[level] += root->val;
        solve(root->left ,ans,level+1);
        solve(root->right,ans,level+1);
        
        
    }
    int deepestLeavesSum(TreeNode* root) {
        map<int,int> ans;
        int max = 0;
        solve(root,ans,0);
        for(auto i:ans){
            if(i.first > max){
                max = i.first;
            }
            
        }
        return ans[max];
    }
};
