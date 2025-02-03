//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//Back-end complete function Template for C++


// } Driver Code Ends
class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        queue<pair<int,int>> q;
        q.push({src,0});
        int n = adj.size();
        vector<int> dist(n,-1);
        dist[src] = 0;
        while(!q.empty()){
            int node = q.front().first;
            int wt = q.front().second;
            q.pop();
            for(auto i:adj[node]){
                if(dist[i] == -1 ||wt+1 < dist[i]){
                    dist[i] = wt+1;
                    q.push({i,dist[i]});
                }
                
            }
        }
        return dist;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int src;
        cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(adj, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
}

// } Driver Code Ends
