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
    int findPosition(vector<int>& inorder,int ele,int start,int end){
        for(int i=start;i<=end;i++){
            if(inorder[i] == ele){
                return i;
            }
        }
        return -1;

    }
    TreeNode*  solve(vector<int>& preorder, vector<int>& inorder,int& preIndex,int inStart,int inEnd){
        if(inStart > inEnd || preIndex >= preorder.size()){
            return NULL;
        }
        if(inStart == inEnd){
            int ele = preorder[preIndex++];
            TreeNode* temp = new TreeNode(ele);
            return temp;
        }
        
        int ele = preorder[preIndex++];
        TreeNode* root = new TreeNode(ele);
        int position = findPosition(inorder,ele,inStart,inEnd);
        root->left = solve(preorder,inorder,preIndex,inStart,position-1);
        root->right = solve(preorder,inorder,preIndex,position+1,inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int inStart = 0;
        int inEnd = inorder.size()-1;
        return solve(preorder,inorder,preIndex,inStart,inEnd);
    }
};
