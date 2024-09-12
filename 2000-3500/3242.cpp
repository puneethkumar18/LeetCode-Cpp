class NeighborSum {
public:
    int n;
    vector<vector<int>> grid;
    NeighborSum(vector<vector<int>>& grid) {
        this->grid = grid;
        this->n = grid.size();
    }

    pair<int ,int> getCorr(int value){
        pair<int ,int> p ;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == value){
                    p  = make_pair(i,j);
                    break;
                }
            }
        }
        return p;
    }
    int adjacentSum(int value) {
        pair<int ,int> p = getCorr(value);
        int i = p.first;
        int j = p.second;
        int ans = 0;
        if (n > (i + 1)) {
            ans += grid[i + 1][j];
        }
        if (n > (j + 1)) {
            ans += grid[i][j + 1];
        }
        if (-1 < (i - 1)) {
            ans += grid[i - 1][j];
        }
        if (-1 < (j - 1)) {
            ans += grid[i][j - 1];
        }
        return ans;
    }

    int diagonalSum(int value) {
        pair<int ,int> p = getCorr(value);
        int i = p.first;
        int j = p.second;
        int ans = 0;
        if (n > (i + 1) &&  n > (j+1)) {
            ans += grid[i + 1][j+1];
        }
        if (n > (j + 1) && -1 < (i-1)) {
            ans += grid[i-1][j + 1];
        }
        if (-1 < (i - 1) && -1 < (j-1)) {
            ans += grid[i - 1][j-1];
        }
        if (-1 < (j - 1) && n > (i+1)) {
            ans += grid[i+1][j - 1];
        }
        return ans;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
