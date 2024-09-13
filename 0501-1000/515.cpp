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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        int level = 1;
        while(!q.empty()){
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(ans.size() < level){
                    ans.push_back(temp->val);
                }else if(ans[level-1] < temp->val){
                    ans[level-1] = temp->val;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            level++;
        }
        return ans;
    }
};
