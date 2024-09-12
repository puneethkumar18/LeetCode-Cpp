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
private:
    int solve(Node* &root){
        if(root->children.size() == 0){
            return 1;
        }
        vector<Node*> ch = root->children;
            int ans = 0;
        for(int i=0;i<ch.size();i++){
            int temp = solve(ch[i]);
            if(temp > ans){
                ans = temp;
            }
        }
        return ans+1;
    }
public:
    int maxDepth(Node* root) {
        if(root == NULL){
            return NULL;
        }
        return solve(root);
    }
};
