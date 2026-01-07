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
    int solve(TreeNode* r1, TreeNode*& r2) {
        if (r1 == NULL)
            return 0;
        r2 = new TreeNode();
        int left = solve(r1->left, r2->left);
        int right = solve(r1->right, r2->right);
        r2->val = left + right + r1->val;
        return r2->val;
    }
    int maxProduct(TreeNode* root) {
        TreeNode* temp = NULL;
        int total = solve(root, temp);
        int mod = 1e9 + 7;
        long long res = 0;
        queue<TreeNode*> q;
        q.push(temp);
        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();
            int leftSubSum = front->left == NULL ? 0 : front->left->val;
            int rightSubSum = front->right == NULL ? 0 : front->right->val;
            long long left =
                ((long long)(total - leftSubSum) * leftSubSum);
            long long right =
                ((long long)(total - rightSubSum) * rightSubSum);

            res = max(res, max(left, right));
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }

        return (int)(res%mod);
    }
};
