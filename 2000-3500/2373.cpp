class Solution {
private:
    int max(int x,int y,vector<vector<int>>& grid){
        int max = INT_MIN;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[x][y] > max){
                    max = grid[x][y];
                }
                y++;
            }
            y = y-3;
            x = x+1;
        }
        return max;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            vector<int> temp;
            for(int j=0;j<n-2;j++){
                int val = max(i,j,grid);
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
