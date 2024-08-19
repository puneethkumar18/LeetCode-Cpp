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
    void getArray(TreeNode* root, vector<int>& arr) {
        if (root == NULL) {
            return;
        }
        getArray(root->left,arr);
        arr.push_back(root->val);
        getArray(root->right,arr);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> arr;
        getArray(root,arr);
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] >= arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
