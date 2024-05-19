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
private:
    void solve(TreeNode* root,map<int,int> &ans){
        if(root == NULL){
            return ;
        }

        ans[root->val] += 1;
        solve(root->left, ans);
        solve(root->right, ans);
    }
public:
    vector<int> findMode(TreeNode* root) {
        map<int,int> ans;
        solve(root,ans);
        if(ans.empty()){
            return {0};
        }
        int max = 0;
        for(auto i:ans){
            if(i.second > max){
                max = i.second;
            }
        }
        vector<int> res;
        for(auto i : ans){
            if(i.second == max){
                res.push_back(i.first);
            }
        }
        return res;
    }
};
