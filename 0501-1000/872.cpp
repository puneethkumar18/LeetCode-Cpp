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
    void solve(TreeNode* root,vector<int>& ans){
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root->right == NULL){
            
            ans.push_back(root->val);
            return;
        }
        solve(root->left,ans);
        solve(root->right,ans);
    }
    bool check(vector<int> arr1,vector<int> arr2){
        if(arr1.size() != arr2.size()){
            return false;
        }
        int n = arr1.size();
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<"  "<<arr2[i]<<endl;
            if(arr1[i]!= arr2[i]){
                return false;
            }
        }
        return true;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        vector<int> arr2;
        solve(root1,arr1);
        solve(root2,arr2);
        return arr1 == arr2;
        // return check(arr1,arr2);
    }
};
