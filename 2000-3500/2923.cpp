class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ans = 0;
        int sum = 0;
        for(int i=0;i<grid.size();i++){
            int temp  = 0;
            for(int j=0;j<grid[i].size();j++){
                temp = temp+grid[i][j];
            }
            if(temp > sum){
                sum = temp;
                ans = i;

            }
        }
        return ans;
    }
};
