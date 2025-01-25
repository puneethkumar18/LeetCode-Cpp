class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i < 0 || j < 0 || grid[i][j] == 1){
            return 0;
        }
        if(i == 0 && j == 0){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        return dp[i][j] = f(i-1,j,grid,dp)+f(i,j-1,grid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m  = obstacleGrid[0].size();
        //vector<vector<int>> dp(n,vector<int>(m+1,0));
        vector<int> prev(m+1,0);
        if(obstacleGrid[0][0] != 1)prev[0] = 1;

        for(int i=1;i<m;i++){
           if(obstacleGrid[0][i] != 1) prev[i] = prev[i-1];
        }
        for(int i=1;i<n;i++){
            vector<int> curr(m+1,0);
            for(int j=0;j<m;j++){
                if((i==0&&j==0) || obstacleGrid[i][j] == 1){
                    continue;
                }
            
                int left = 0,down = 0;
                if(i-1 >= 0)down = prev[j];
                if(j-1 >= 0)left = curr[j-1];
                curr[j] = down+left;
            }
            prev = curr;
        }
        return prev[m-1];
    }
};
