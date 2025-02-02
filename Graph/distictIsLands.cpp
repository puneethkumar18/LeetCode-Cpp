//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int i,int j,vector<vector<int>>& grid,vector<pair<int,int>>& vec,vector<vector<bool>>& vis,int row,int col){
        vis[i][j] = true;
        int n = grid.size();
        int m = grid[0].size();
        vec.push_back({i-row,j-col});
        int delRow[] = {-1,0,+1,0};
         int delCol[] = {0,-1,0,+1};
         for(int k=0;k<4;k++){
             int nrow = i+delRow[k];
             int ncol = j+delCol[k];
             
             if(nrow < n && nrow >=0 && ncol < m&& ncol >= 0 && !vis[nrow][ncol] && grid[nrow][ncol] == 1 ){
                 dfs(nrow,ncol,grid,vec,vis,row,col);
             }
         }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        set<vector<pair<int,int>>> st;
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int i=0;i<n ;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    vector<pair<int,int>> vec;
                    dfs(i,j,grid,vec,vis,i,j);
                    st.insert(vec);
                }
            }
            
        }
        return st.size();
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
