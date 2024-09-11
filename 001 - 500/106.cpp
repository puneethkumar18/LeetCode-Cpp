/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
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
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,
                    int& postIndex, int inStart, int inEnd) {

        if(inStart > inEnd || postIndex < 0){
            return NULL;
        }
        if (inStart == inEnd) {
            int ele = postorder[postIndex--];
            TreeNode* temp = new TreeNode(ele);
            return temp;
        }
        int ele = postorder[postIndex--];
        TreeNode* root = new TreeNode(ele);
        int position = findPosition(inorder,ele,inStart,inEnd);
        root->right = solve(inorder,postorder,postIndex,position+1,inEnd);
        root->left = solve(inorder,postorder,postIndex,inStart,position-1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = postorder.size()-1;
        return solve(inorder,postorder,postIndex,0,inorder.size()-1);
    }
};
