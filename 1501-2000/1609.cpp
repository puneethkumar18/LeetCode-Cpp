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
    bool solve(TreeNode* root, int level, unordered_map<int, int>& ma) {
        if (root == NULL) {
            return true;
        }
        if(level&1){
            if(root->val%2 != 0){
                return false;
            }
        }else{
            if(root->val%2 == 0){
                return false;
            }
        }
        if (ma[level] == 0 || (level & 1 && ma[level] > root->val) ||
            (level % 2 == 0 && ma[level] < root->val)) {
            ma[level] = root->val;
        } else {
            return false;
        }
        bool left = solve(root->left, level + 1, ma);
        bool right = solve(root->right, level + 1, ma);
        return left && right;
    }
    bool isEvenOddTree(TreeNode* root) {
        unordered_map<int, int> ma;
        return solve(root, 0, ma);
    }
};
