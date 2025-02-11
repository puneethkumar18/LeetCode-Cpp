//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class DisJointSet{
    vector<int> rank, parent, size;
 public:
    DisJointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    
    int findUlParent(int node){
        
        if( node == parent[node] )
            return node;
        
        return parent[node] =  findUlParent(parent[node]);
    }
    
    void unionByRank(int u,int v){
        int ultp_u = findUlParent(u);
        int ultp_v = findUlParent(v);
        if(ultp_u == ultp_v)return;
        if(rank[ultp_u] < rank[ultp_v]){
            parent[ultp_u] = ultp_v;
        }else if(rank[ultp_v] < rank[ultp_u]){
            parent[ultp_v] = ultp_u;
        }else{
            parent[ultp_v] = ultp_u;
            rank[ultp_u]++;
        }
    }
    void unionBySize(int u,int v){
        int ultp_u = findUlParent(u);
        int ultp_v = findUlParent(v);
        if(ultp_u == ultp_v)return;
        if(size[ultp_u] < size[ultp_v]){
            parent[ultp_u] = ultp_v;
            size[ultp_v] += size[ultp_u];
        }else{
            parent[ultp_v] = ultp_u;
            size[ultp_u] += size[ultp_v];
        } 
    }
   
};

class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        
        vector<pair<int,pair<int,int>>> edges;
        
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                int node = i;
                int wt = j[1];
                int adjNode = j[0];
                edges.push_back({wt,{node,adjNode}});
            }
        }
        
        DisJointSet ds(V);
        sort(edges.begin(),edges.end());
        int mstWt = 0;
        for(auto i:edges){
            int wt = i.first;
            int u = i.second.first;
            int v = i.second.second;
            //cout<<v<<" "<<u<<endl;
            if(ds.findUlParent(u) != ds.findUlParent(v)){
                mstWt += wt;
                ds.unionBySize(u,v);
            }
        }
        return mstWt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
        cout << obj.spanningTree(V, adj) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
