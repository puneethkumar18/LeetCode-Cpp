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
    pair<int,int>  depthOfTheNode(TreeNode* root,int val,int depth,int parentVal){
        if (root == NULL){
            pair<int,int> p = make_pair(-1,-1);
            return p;
        }

        if (root->val == val){
            pair<int,int> p = make_pair(depth,parentVal);
            return p;
        }
        pair<int,int> left = depthOfTheNode(root->left,val,depth+1,root->val);
        pair<int,int> right = depthOfTheNode(root->right,val,depth+1,root->val);
        if (right.first != -1){
            return right;
        }
        
             return left;
        
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int>  xDepth = depthOfTheNode(root,x,0,0);
        pair<int,int> yDepth = depthOfTheNode(root,y,0,0);

        if ((xDepth.first == yDepth.first) && (xDepth.second != yDepth.second)){
            return true;
        }
        return false;
    }
};
