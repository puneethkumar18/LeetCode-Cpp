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
    void solve(TreeNode* &root,stack<TreeNode*> &stack,int val){
        if(root == NULL){
            return ;
        }
        if(root->val == val){
            if(root->right != NULL) stack.push(root->right);
            if(root->left != NULL) stack.push(root->left);
            root = NULL;
        }
        else{
        solve(root->left,stack,val);
        solve(root->right,stack,val);
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        stack<TreeNode*> st;
        bool need = false;
        sort(to_delete.rbegin(),to_delete.rend());
        for(int i=0;i<to_delete.size();i++){
            if(to_delete[i] == root->val){
                need = true;
                continue;
            }
            solve(root,st,to_delete[i]);
        }
        if(need){
            solve(root,st,root->val);
        }
        vector<TreeNode*> ans;

        if(root != NULL){
            ans.push_back(root);
        }
        while(!st.empty()){
           
             ans.push_back(st.top());
                    st.pop();
        }
        return ans;
    }
};
