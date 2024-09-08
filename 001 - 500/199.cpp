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

    vector<int> rightSideView(TreeNode* root) {
        map<int,vector<int>> m;
        vector<int> ans;

        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int n = q.size();
            vector<int> arr;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                arr.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            i++;
            m[i] = arr;
        }
        
        for(auto i:m){
            int n = i.second.size()-1;
            ans.push_back(i.second[n]);
        }
        return ans;

    }
};
