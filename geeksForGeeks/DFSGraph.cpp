//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfs(vector<int> adj[],unordered_map<int,bool>& seen,int node,vector<int>& ans){
        if(seen[node]){
            return ;
        }
        seen[node] = true;
        ans.push_back(node);
        
        for(auto i:adj[node]){
            if(!seen[i]){
                dfs(adj,seen,i,ans);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        unordered_map<int,bool> seen;
        vector<int> ans;
        
        for(int i=0;i<V;i++){
            if(!seen[i]){
                dfs(adj,seen,i,ans);
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
