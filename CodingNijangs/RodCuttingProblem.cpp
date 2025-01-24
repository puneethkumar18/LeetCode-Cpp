#include<bits/stdc++.h>
int f(int i,int n,vector<int>& arr,vector<vector<int>>& dp){
	if(i==0){
		return n*arr[0];
	}
	if(dp[i][n] != -1){
		return dp[i][n];
	}
	int nonPick = f(i-1,n,arr,dp);
	int pick = INT_MIN;
	if((i+1) <= n)pick = arr[i]+f(i,n-(i+1),arr,dp);
	return dp[i][n] =  max(pick,nonPick);
}	
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>> dp(n,vector<int>(n+1,-1));
	return f(n-1,n,price,dp);
}
