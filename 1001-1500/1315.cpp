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
    int levelOrder(TreeNode* root){
        queue<TreeNode*> q;
        vector<int> ans;
        int sum = 0;
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
        while(!q.empty()){
            TreeNode* temp = q.front(); 
            q.pop();
            if(temp->left != NULL){
                ans.push_back(temp->left->val);
            }
           if(temp->right != NULL){
             ans.push_back(temp->right->val);
           }
            
        }
        for(auto i:ans){
            sum+=i;
        }
        return sum;
    }
    void solve(TreeNode* root,int& sum){
        if(root == NULL){
            return;
        }
        
        if(root->val%2 == 0){
           sum += levelOrder(root);
        }
        solve(root->left,sum);
        solve(root->right,sum);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        solve(root,sum);
        return sum;
    }
};
