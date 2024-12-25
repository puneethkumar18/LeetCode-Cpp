class Solution {
public:
    void solve(vector<vector<int>>& isConnected,int curr,int n,vector<bool>& vis){
        
        vis[curr] = true;
        for(int i=0;i<n;i++){
            if (i!= curr && isConnected[curr][i] == 1 && !vis[i]){
                solve(isConnected,i,n,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> vis(n,false);

        int cnt = 0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                solve(isConnected,i,n,vis);
            }
        }

        return cnt;
    }
};
