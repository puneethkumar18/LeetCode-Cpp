class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination){
            return true;
        }
        unordered_map<int, vector<int>> m;
        
        for(int i=0;i<edges.size();i++){
            int first = edges[i][0];
            int second = edges[i][1];
            m[first].push_back(second);
            m[second].push_back(first);
        }
        map<int,bool> visited;
        queue<int> q;
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto i:m[temp]){
                if(i == destination){
                    return true;
                }
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);

                }
            }
        }
        return false;
    }
};
