//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        queue<int> q;
        q.push(0);
        unordered_map<int,bool> visited;
        visited[0] = true;
        vector<int> ans;
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                int temp = q.front();
                q.pop();
                
                ans.push_back(temp);
                
                for(auto j:adj[temp]){
                    if(!visited[j] ){
                        visited[j] = true;
                        q.push(j);
                    }
                }
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
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
