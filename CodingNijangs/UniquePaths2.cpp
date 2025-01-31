#include<bits/stdc++.h>
int mod = (int)(1e9+7);
int f(int i,int j,vector< vector< int> > &mat,vector<vector<int>>& dp){
    if(i >= 0 && j >= 0 && mat[i][j] == -1){
        return 0;
    }
    if(i == 0 && j == 0){
        return 1;
    }
    if(i < 0 || j < 0){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    return dp[i][j] =  (f(i-1,j,mat,dp)+ f(i,j-1,mat,dp))%mod;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return (f(n-1,m-1,mat,dp))%mod;
}
