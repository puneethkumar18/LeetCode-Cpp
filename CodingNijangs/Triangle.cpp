#include <bits/stdc++.h> 

int f(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>>& dp){
	if(i == n || j == n){
		return 0;
	}
	if(dp[i][j] != -1){
		return dp[i][j];
	}
	int down  = triangle[i][j]+f(i+1,j,triangle,n,dp);
	int cross  = triangle[i][j]+f(i+1,j+1,triangle,n,dp);

	return dp[i][j] = min(down,cross);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	//vector<vector<int>> dp(n,vector(n,0));
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		arr[i] = triangle[n-1][i];
	}
	
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			int p = triangle[i][j]+arr[j];
			int q = triangle[i][j]+arr[j+1];
			arr[j] = min(p,q);
		}
	}
	return arr[0];
}
