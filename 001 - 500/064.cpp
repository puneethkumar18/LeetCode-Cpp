class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i < 0 || j < 0){
            return INT_MAX;
        }
        if(i == 0 && j== 0){
            return grid[0][0];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        return dp[i][j] =  min(f(i-1,j,grid,dp),f(i,j-1,grid,dp))+grid[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n,vector<int>(m+1,0));
        dp[0][0] = grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i == 0&&j==0){
                    continue;
                }
                int left = (int)(1e9),down = (int)(1e9);
                if(i-1 >= 0)down = dp[i-1][j];
                if(j-1 >= 0)left = dp[i][j-1];
                dp[i][j] = ( min(down,left)+grid[i][j]);
            }
        }
        return dp[n-1][m-1];
    }
};
