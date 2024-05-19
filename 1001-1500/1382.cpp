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
    TreeNode* constructTree(int s,int e,vector<int> &ans){
        if(s > e){
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left = constructTree(s,mid-1,ans);
        root->right = constructTree(mid+1,e,ans);

        return root;
    }
    void getVector(TreeNode* &root,vector<int> &ans){
        if(root == NULL){
            return ;
        }
        getVector(root->left,ans);
        ans.push_back(root->val);
        getVector(root->right,ans);

    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> pre;
        getVector(root,pre);
        return constructTree(0,pre.size()-1,pre);
    }
};
