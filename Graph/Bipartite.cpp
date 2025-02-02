//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isBipartite(vector<vector<int>>& adj) {
        // Code here
        
        int n = adj.size();
        vector<int> vis(n,0);
        
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int  m = q.size();
            for(int i=0;i<m;i++){
                int temp = q.front();
                q.pop();
                for(auto j:adj[temp]){
                    if(vis[j] == 0){
                        q.push(j);
                        vis[j] = vis[temp] == 1 ? 2:1;
                    }else if(vis[j] == vis[temp]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
