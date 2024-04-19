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
    void getArrayOutTree(vector<int> &ans,TreeNode* root){
        if(root == NULL){
            return ;
        }
        getArrayOutTree(ans,root->left);
        ans.push_back(root->val);
         getArrayOutTree(ans,root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans ;
        getArrayOutTree(ans,root);
        TreeNode* res = new TreeNode(ans[0]);
        res->left = NULL;
        TreeNode* curr = res;
        for(int i=1;i<ans.size();i++){
            TreeNode* temp = new TreeNode(ans[i]);
            curr->left = NULL;
            curr->right = temp;
            curr = temp;
        }
        return res;
    }
        
};
