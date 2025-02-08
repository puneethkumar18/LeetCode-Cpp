//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int n = heights.size();
        int m =heights[0].size();
        
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        vector<vector<int>> dirs = {{-1,0},{0,-1},{1,0},{0,1}};
        dist[0][0] = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            if( row == n-1 && col ==  m-1 )return diff;
            for(int k =0;k<4;k++){
                int nrow = row + dirs[k][0];
                int ncol = col + dirs[k][1];
                if(nrow < n&& nrow >= 0 && ncol < m && ncol >= 0 ){
                    int newEffort = max(abs(heights[row][col] - heights[nrow][ncol]),diff);
                    
                    if(newEffort < dist[nrow][ncol]){
                        dist[nrow][ncol] = newEffort;
                        pq.push({newEffort,{nrow,ncol}});
                        
                    }
                }
            }   
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
