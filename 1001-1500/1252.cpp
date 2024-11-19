class Solution {
public:
    void update(int m,int n,int i,int j,vector<vector<int>>& ans){
        for(int k=0;k<n;k++){
            ans[i][k]++;
        }
        for(int k=0;k<m;k++){
            ans[k][j]++;
        }
    }
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> ans(m,vector<int>(n,0));

        for(int i=0;i<indices.size();i++){
            update(m,n,indices[i][0],indices[i][1],ans);
        }
        int res = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]&1){
                    res++;
                }
            }
        }
        return res;
    }
};
