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
    TreeNode* solve(vector<int> preorder, vector<int> postorder,int &i,int &j){
        if(preorder.size() < i){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[i]);
        
        if(preorder[i] == postorder[j]){
            j++;
            i++;
            return root;
        }
        i++;
        root->left = solve(preorder,postorder,i,j);
        if(root->val  == postorder[j]){
            j++;
        }else{
            root->right = solve(preorder,postorder,i,j);
            j++;
        }
       
        
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int i = 0;
        int j = 0;
        return solve(preorder,postorder,i,j);

    }
};
