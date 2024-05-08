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
    void bst(TreeNode* &root,int number){
        if(root == NULL){
            root = new TreeNode(number);
            return;
        }
        if(number <= root->val){
            bst(root->left,number);
        }else{
            bst(root->right,number);
        }
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root;
        for(int i=0;i<preorder.size();i++){
            bst(root,preorder[i]);
        }
        return root;
    }
};
