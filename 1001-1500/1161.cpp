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
    void solve(TreeNode* root,vector<int>& levelSum){
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;
        while(!q.empty()){
            TreeNode* temp = q.front();
            if(temp != NULL)sum = temp->val+sum;
            q.pop();
            if(temp == NULL){
                levelSum.push_back(sum);
                 sum = 0;
                if(!q.empty()){
                   
                    q.push(NULL);
                }
            }else{
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }

    }
    int maxLevelSum(TreeNode* root) {
        vector<int> levelSum;
        solve(root,levelSum);
        int ans = 0;
   
        for(int i=0;i<levelSum.size();i++){
            if(levelSum[i] > levelSum[ans]){
                ans = i;
            }
        }
        return ans+1;
    }
};
