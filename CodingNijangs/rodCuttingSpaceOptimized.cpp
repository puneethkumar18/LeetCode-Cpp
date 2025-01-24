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

	//vector<vector<int>> dp(n,vector<int>(n+1,0));
	vector<int> prev(n+1,0);
	vector<int> curr(n+1,0);
	for(int i=0;i<=n;i++){
		prev[i] = i*price[0];
	}

	for(int i=1;i<n;i++){
		
		for(int j=0;j<=n;j++){
			int nonPick = prev[j];
			int pick = INT_MIN;
			int rod = i+1;
			if(rod <= j)pick = price[i]+curr[j-rod];
			curr[j] = max(pick,nonPick);
		}
		prev = curr;
		
	}
	return prev[n];
}
