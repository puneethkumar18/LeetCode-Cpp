/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(Node* root, map<int,vector<int>>& m,int level){
        if(root == NULL){
            return;
        }
        m[level].push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            solve(root->children[i],m,level+1);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        solve(root,m,0);
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
