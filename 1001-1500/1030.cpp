class Solution {
public:
    int solve(int r1,int r2,int c1,int c2){
        return abs(r1-r2)+abs(c1-c2);
    }
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {

        vector<pair<int,vector<int>>> ans;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                    
                    int temp = solve(rCenter,i,cCenter,j);
                    ans.push_back({temp,{i,j}});
            }
        }

        sort(ans.begin(),ans.end(),[](pair<int,vector<int>> a,pair<int,vector<int>> b){
            return a.first < b.first;
        });
        vector<vector<int>> res;
        for(auto i:ans){
            res.push_back(i.second);
        }
        return res;
    }
};
