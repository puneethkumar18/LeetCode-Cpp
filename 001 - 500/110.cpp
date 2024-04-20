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
    pair<int,bool> solve(TreeNode* root){
        if(root == NULL){
            pair<int,bool> p = make_pair(0,true); 
            return p;
        }

        pair<int,bool> leftTree = solve(root->left);
        pair<int,bool> rightTree = solve(root->right);

        int left = leftTree.first;
        int right = rightTree.first;

        pair<int,bool> ans;
        ans.first = max(left,right)+1;
        if(leftTree.second && rightTree.second){
            if(abs(left-right) <=1 ){
            ans.second = true;
        }else{
            ans.second = false;
        }
        }else{
            ans.second = false;
        }
        return ans;

    }
    bool isBalanced(TreeNode* root) {
        pair<int,bool> res = solve(root);
        return res.second;
    }
};
