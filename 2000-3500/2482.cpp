class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> row(n,0);
        vector<int> column(m,0);
        int temp = m+n;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    row[i]++;
                    column[j]++;
                }
            }
        }
        vector<vector<int>> res(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int onesCount = (row[i]+column[j]);
                int zeroCount = temp - onesCount;
                res[i][j] = onesCount-zeroCount;
            }
        }
        return res;
    }
};
