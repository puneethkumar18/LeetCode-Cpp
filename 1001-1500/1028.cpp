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
    int getNumber(string str,int& i){
        int num = 0;
        while(str.size() > i && str[i] != '-'){
            num *= 10;
            num  += str[i]-'0';
            i++;
        }
        return num;
    }
    TreeNode* solve(string str,int& index,int& temp,int depth){
        if(str.size() <= index)return NULL;
        //cout<<temp<<" -> "<<depth<<endl;
        if(depth > temp )return NULL;

        int ele = getNumber(str,index);
        //cout<<ele<<endl;
        TreeNode* root = new TreeNode(ele);
        temp = 0;
        while(str[index] == '-'){
            index++;
            temp++;
        }
        root->left = solve(str,index,temp,depth+1);
        root->right = solve(str,index,temp,depth+1);
        return root;
    }
    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0;
        int temp = 0;
        return solve(traversal,i,temp,0);
    }
};
