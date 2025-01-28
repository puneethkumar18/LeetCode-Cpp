class Solution {
public:
    int dfs(int i, int j, int n, int m, vector<vector<int>>& grid) {
        if (i >= n || i < 0 || j >= m || j < 0 || grid[i][j] == 0) {
            return 0;
        }

        int temp = grid[i][j];
        grid[i][j] = 0;
        vector<vector<int>> dirs = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
        for (int k = 0; k < 4; k++) {

            temp += dfs(i + dirs[k][0], j + dirs[k][1], n, m, grid);
        }

        return temp;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) {
                    res = max(res, dfs(i, j, n, m, grid));
                }
            }
        }
        return res;
    }
};
