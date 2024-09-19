//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSafe(int x,int y,int n,vector<vector<bool>>& visited,vector<vector<int>> arr){
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && arr[x][y] == 1){
             return true;
        }   
       return false;
        
    }
    void solve(int x,int y, vector<vector<bool>>& visited ,string path,int n, vector<vector<int>> arr,vector<string>& ans){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        
        visited[x][y] = 1;
        //DLRU
        if(isSafe(x+1,y,n,visited,arr)){
           
            solve(x+1,y,visited,path+'D',n,arr,ans);
             
        }
        
        
        if(isSafe(x,y-1,n,visited,arr)){
       
             
            solve(x,y-1,visited,path+'L',n,arr,ans);
             
        }
        
        
        
        
        if(isSafe(x,y+1,n,visited,arr)){
            
             
            solve(x,y+1,visited,path+'R',n,arr,ans);
            
        } 
        
        
        
        if(isSafe(x-1,y,n,visited,arr)){
        
             
            solve(x-1,y,visited,path+'U',n,arr,ans);
      
        }
        visited[x][y] = 0;
        
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        
        vector<string> ans;
        int n = mat.size();
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        string path = "";
        
        if(mat[0][0] == 0){
            return ans;
        }
        
        solve(0,0,visited,path,n,mat,ans);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
