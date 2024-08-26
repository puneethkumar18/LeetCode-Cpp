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
class FindElements {
public:
    TreeNode* root;
    set<int> s;
    FindElements(TreeNode* root) {
        this->root = root;
        if(root != NULL) this->root->val  = 0;
        solve(this->root);
    }
    void solve(TreeNode*& root) {

        if(root == NULL){
            return ;
        }
        s.insert(root->val);
        if(root->left != NULL){
            int leftVal = 2*root->val+1;
            root->left->val = leftVal;
             solve(root->left);
        }
        if(root->right != NULL){
            int rightVal = 2*root->val+2;
            root->right->val = rightVal;
             solve(root->right);
        }
       
        solve(root->right);
    }
    bool find(int target) {
        return s.contains(target);
        // queue<TreeNode*> q;
        // q.push(this->root);
        // while(!q.empty()){
        //     TreeNode* temp = q.front();
        //     q.pop();
        //     if(temp->val == target){
                
        //         return true;
        //     }
        //     if(temp->left)q.push(temp->left);
        //     if(temp->right)q.push(temp->right);
        // }
        // return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
