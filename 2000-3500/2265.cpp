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
    pair<int,int> solve(TreeNode* root,int& ans){
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int>  left = solve(root->left,ans);
        pair<int,int>  right = solve(root->right,ans);
        int nodes = left.first+right.first+1;
        int sum = left.second+right.second+root->val;
        if (sum/nodes == root->val){
            ans++;
        }
        pair<int,int> p = make_pair(nodes,sum);
        return p;
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};
