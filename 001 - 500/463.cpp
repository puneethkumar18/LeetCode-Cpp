class Solution {
public:

    int get(vector<vector<int>>& grid ,int x,int y,int n ,int m){
        int ans = 0;
        if(x-1 < 0  || grid[x-1][y] == 0){
            ans++;
        }
        if(y-1 < 0 || grid[x][y-1] == 0){
            ans++;
        }

        if(x+1 >= n || grid[x+1][y] == 0){
            ans++;
        }
        if(y+1 >= m || grid[x][y+1] == 0){
            ans++;
        }

        return ans;
        
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    ans += get(grid,i,j,n,m);
                }
            }
        }
        return ans;
    }
};
