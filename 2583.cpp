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
    void solve(map<int,long long>& m,TreeNode* root,int level){
        if(root == NULL){
            return;
        }
        m[level] += root->val;
        solve(m,root->left,level+1);
        solve(m,root->right,level+1);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        map<int,long long > m;
        solve(m,root,1);
        vector<long long> temp;
        for(auto i:m){
            temp.push_back(i.second);
        }
        sort(temp.rbegin(),temp.rend());
        if(temp.size() < k){
            return -1;
        }
        return temp[k-1];
    }
};
