class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < m; i++) {
            int first = grid[0][i];
            for (int j = 1; j < n; j++) {
                if (grid[j][i] > first) {
                    first = grid[j][i];
                } else {
                    res += (first + 1) - grid[j][i];
                    first++;
                }
            }
        }
        return res;
    }
};
