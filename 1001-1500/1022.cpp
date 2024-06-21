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
    int decimalToNumber(vector<int> deci){
        int num = 0;
        int base = 1;
        for(int i = deci.size()-1;i > -1 ;i--){
            num += deci[i]*base;
            base = base*2;
        }
        return num;
    }
    void solve(TreeNode* root,vector<int> arr ,int &ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            arr.push_back(root->val);
            int val = decimalToNumber(arr);
            ans+=val;
            return ;
        }
        arr.push_back(root->val);
        solve(root->left,arr,ans);
        solve(root->right,arr,ans);

    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        vector<int> arr;
        solve(root,arr,ans);
        return ans;
    }
};
