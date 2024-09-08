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
    void solve(TreeNode* root, map<int, map<int, vector<int>>>& m, int i,int level) {
        if (root == NULL) {
            return;
        }
         m[i][level].push_back(root->val);
        solve(root->left, m, i - 1,level+1);
        solve(root->right, m, i + 1,level +1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int>>> m;
        vector<vector<int>> ans;
        solve(root, m, 0,0);
        for (auto i : m) {
            vector<int> temp;
            for(auto j:i.second){
                sort(j.second.begin(),j.second.end());
                for(auto k:j.second){
                    temp.push_back(k);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
