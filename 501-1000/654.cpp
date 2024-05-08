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
    TreeNode* insertNode(vector<int> pre ,int start,int end){     
        
        if(start > end){
            return NULL;
        }else if(start == end){
            TreeNode* temp = new TreeNode(pre[end]);
            return temp;
        }
        int max = 0;
        int index ;
        for(int i = start;i<=end;i++){
            if(pre[i] > max){
                max = pre[i];
                index = i;
            }
        }
        TreeNode*  root = new TreeNode(max);
        root->left = insertNode(pre,start,index-1);
        root->right = insertNode(pre,index+1,end);

        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return insertNode(nums,0,nums.size()-1);
    }
};
