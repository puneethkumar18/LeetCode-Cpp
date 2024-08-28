class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].rbegin(),grid[i].rend());
        }
        int ans = 0;
        for(int i=0;i<grid[0].size();i++){
            int maxi = 0;
            for(int j=0;j<grid.size();j++){
                cout<<grid[j][i];
                if(grid[j][i] > maxi){
                    maxi = grid[j][i];
                }
            }
        
            ans += maxi;
        }
        return ans;
    }

};
