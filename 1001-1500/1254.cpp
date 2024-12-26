class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        return (i < m && i >= 0 && j < n && j >= 0 );
    }
    void dfs(vector<vector<int>>& grid,int i,int j,int m,int n){
        grid[i][j] = 1;

        vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
        for(int k=0;k<4;k++){
            int currI = i+dirs[k][0];
            int currJ = j+dirs[k][1];

            if(isValid(currI,currJ,m,n) && grid[currI][currJ] == 0){
                dfs(grid,currI,currJ,m,n);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;i++){
            if(grid[i][0] == 0) dfs(grid,i,0,m,n);
            if(grid[i][n-1] == 0) dfs(grid,i,n-1,m,n);
        }

        for(int j=0;j<n;j++){
            if(grid[0][j] == 0)dfs(grid,0,j,m,n);
            if(grid[m-1][j] == 0)dfs(grid,m-1,j,m,n);
        }
        int res = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                    res++;
                    dfs(grid,i,j,m,n);
                }
            }
        }
        return res;
    }
};
