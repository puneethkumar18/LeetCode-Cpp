class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,int m,int n,vector<vector<bool>>& visited){
        visited[i][j] = true;
        if(i-1 >= 0 && grid[i-1][j] == '1'&& !visited[i-1][j]){
            dfs(grid,i-1,j,m,n,visited);
        }
        if(i+1 < m && grid[i+1][j] == '1'&& !visited[i+1][j]){
            dfs(grid,i+1,j,m,n,visited);
        }
        if(j-1 >= 0 && grid[i][j-1] == '1'&& !visited[i][j-1]){
             dfs(grid,i,j-1,m,n,visited);
        }
        if(j+1 <  n && grid[i][j+1] == '1'&& !visited[i][j+1]){
             dfs(grid,i,j+1,m,n,visited);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    cnt++;
                    dfs(grid,i,j,m,n,visited);
                }
            }
        }
        return cnt;
    }
};
