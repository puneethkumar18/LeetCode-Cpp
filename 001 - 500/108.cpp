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
    TreeNode* insertIntoBST(int s,int e,vector<int> nums){
        if(s>e){
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = insertIntoBST(s,mid-1,nums);
        root->right = insertIntoBST(mid+1,e,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0){
            return NULL;
        }
        return insertIntoBST(0,nums.size()-1,nums);
    }
};
