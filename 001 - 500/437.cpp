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
    void solve(TreeNode* root, int k,vector<int> path,int& count){
        if(root == NULL){
            return;
        }
        if(root->val <= INT_MAX/10)path.push_back(root->val);
        solve(root->left,k,path,count);
        solve(root->right,k,path,count);
        int n = path.size();
        int sum = 0;
        for(int i= n-1;i>-1;i--){
            sum+=path[i];
            if(sum == k){
                count++;
            }
        }
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count  = 0;
        vector<int> path;
        solve(root,targetSum,path,count);
        return count;
    }
};
