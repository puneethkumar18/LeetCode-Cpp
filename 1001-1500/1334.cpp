class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        vector<vector<int>> adj(n,vector<int>(n,1e9));
        for(int i=0;i<n;i++)adj[i][i] = 0;
        int m  = edges.size();
        for(int i=0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u][v] = wt;
            adj[v][u] = wt;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(adj[i][k] == 1e9 || adj[k][j] == 1e9)continue;
                    adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
        int res = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=0;j<n;j++){
                if(i != j && adj[i][j] <= distanceThreshold){
                    temp++;
                }
            }
            if(mini >= temp){
                mini = temp;
                res = i;
            }
        }
        return res;
    }
};
