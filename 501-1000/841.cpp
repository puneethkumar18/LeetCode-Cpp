class Solution {
public:
    void solve(unordered_map<int,vector<int>> &m, vector<bool> &visited, int node){
        visited[node] = true;
        
        for(auto i:m[node]){
            if(!visited[i]){
                solve(m,visited,i);
            }
        }
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        //unordered_map<int,vector<int>> m;
        vector<bool> visited(rooms.size());

        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            visited[front] = true;
            for(auto i:rooms[front]){
                if(!visited[i]) q.push(i);
            }
        }

        // for(int i =0;i<rooms.size();i++){
        //     for(int j=0;j<rooms[i].size();j++){
        //         m[i].push_back(rooms[i][j]);
        //     }
        // }
        
        
        // solve(m,visited,0);
        for(auto i:visited){
            if(i == false){
                return false;
            }
        }
        return true;
    }
};
