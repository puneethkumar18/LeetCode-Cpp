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
class BSTIterator {
public:
    TreeNode* head;
    queue<int> q;
    BSTIterator(TreeNode* root) {
        this->head = root;
        solve(root);
    }
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }
        solve(root->left);
        q.push(root->val);
        solve(root->right);
    }
    
    int next() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    bool hasNext() {
        if(q.empty()){
            return false;
        }
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
