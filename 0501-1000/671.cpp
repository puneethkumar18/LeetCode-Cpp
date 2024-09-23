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
    void solve(TreeNode* root,set<int>& temp){
        if(root == NULL){
            return ;
        }
        temp.insert(root->val);
        solve(root->left,temp);
        solve(root->right,temp);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> arr;
        solve(root,arr);
        int ans = -1;
        cout<<arr.size()<<endl;;
        int count = 0;
        for(auto i:arr){
            if(count == 1){
                ans = i;
                break;
            }
            count++;
        }
        return ans;
    }
};
