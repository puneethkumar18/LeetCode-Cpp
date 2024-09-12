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
    void  solve (TreeNode* root,vector<int> &min){
        if(root == NULL){
            return ;
        }

        
        solve(root->left,min);
        min.push_back(root->val);
        solve(root->right,min);

    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> minimum ;
        solve(root,minimum);
        
        int min = INT_MAX;
        for(int i=0;i<minimum.size()-1;i++){
            if(minimum[i+1] - minimum[i] < min){
                min = minimum[i+1]-minimum[i];
            }
        }
        return min;
    }
};
