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
    void solve(TreeNode* root,map<int,vector<int>> &m,int level){
        if(root == NULL){
            return ;
        }
        m[level].push_back(root->val);
        solve(root->left,m,level+1);
        solve(root->right,m,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        
        solve(root,m,0);
        for(auto i:m){
            ans.push_back(i.second);
        }
        //vector<int> p;
        // queue<TreeNode*> q;
        // q.push(root);
        // q.push(NULL);
        // while (!q.empty()) {
        //     TreeNode* temp = q.front();
        //     if(temp != NULL)p.push_back(temp->val);
        //     q.pop();
           
        //     if (temp == NULL) {
        //         ans.push_back(p);
        //         p.clear();
        //         if (!q.empty()) {
        //             q.push(NULL);
        //         }
        //     } else {
                 
        //         if (temp->left ) {
        //             q.push(temp->left);
        //         }
        //         if (temp->right) {
        //             q.push(temp->right);
        //         }
        //     }
        // }
        return ans;
    }
};
