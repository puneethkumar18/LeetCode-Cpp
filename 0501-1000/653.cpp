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
    void getArray(TreeNode* root,vector<int>& arr){
        if(root == NULL){
            return ;
        }
        getArray(root->left,arr);
        arr.push_back(root->val);
        getArray(root->right,arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        getArray(root,arr);
    
        int sum;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                sum = arr[i]+arr[j];
                if(sum == k){
                    return true;
                }
            }
        }
        
        return false;
    }
};
