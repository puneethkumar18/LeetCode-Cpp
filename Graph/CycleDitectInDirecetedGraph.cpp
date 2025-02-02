//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool dfs(int src,vector<vector<int>>& adj,vector<bool>& vis,vector<bool>& dfsVis){
        if(vis[src] == true && dfsVis[src] == true)return true;
        vis[src] = true;
        dfsVis[src] = true;
        for(auto i:adj[src]){
            if(src == i){
                return true;
            }else{
                if(dfs(i,adj,vis,dfsVis) == true)return true;
            }
        }   
        dfsVis[src] = false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        vector<bool> vis(V,0);
        vector<bool> dfsVis(V,0);
        for(int i=0;i<V;i++){
            if(dfs(i,adj,vis,dfsVis))return true;
        }
        return false;
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
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
