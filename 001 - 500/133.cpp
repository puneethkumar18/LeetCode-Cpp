/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    Node* cloneGraphUtil(Node* node,unordered_map<Node*,Node*>& mp){
        if(node == NULL){
            return node;
        }
        Node* start = new Node(node->val);
        mp[node] = start;
        for(auto neighbor:node->neighbors){
            if(mp.find(neighbor) == mp.end()){
                start->neighbors.push_back(cloneGraphUtil(neighbor,mp));
            }else{
                start->neighbors.push_back(mp[neighbor]);
            }
        }
        return start;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> ma;
        return cloneGraphUtil(node,ma);
    }
};
