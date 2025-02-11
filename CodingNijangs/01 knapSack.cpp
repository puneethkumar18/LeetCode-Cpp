#include <bits/stdc++.h> 
int mod = (int)(1e9+7);
int f(int i,int k,vector<int> &arr,vector<int>& weight,vector<vector<int>>& dp){
    if(k == 0){
        return 0;
    }
    if(i == 0){
        return k >= arr[i] ? weight[i]:0;
    }
    if(dp[i][k] != -1){
        return dp[i][k];
    }
    int pick = INT_MIN;
    int nonPick = f(i-1,k,arr,weight,dp);
    if(arr[i] <= k){
		pick = weight[i] + f(i-1,k-arr[i],arr,weight,dp);
	};

    return dp[i][k] =   max(pick,nonPick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
	return f(n-1,maxWeight,weight,value,dp);
}



// Using Tabulation method
#include <bits/stdc++.h> 
int mod = (int)(1e9+7);
int f(int i,int k,vector<int> &arr,vector<int>& weight,vector<vector<int>>& dp){
    if(k == 0){
        return 0;
    }
    if(i == 0){
        return k >= arr[i] ? weight[i]:0;
    }
    if(dp[i][k] != -1){
        return dp[i][k];
    }
    int pick = INT_MIN;
    int nonPick = f(i-1,k,arr,weight,dp);
    if(arr[i] <= k){
		pick = weight[i] + f(i-1,k-arr[i],arr,weight,dp);
	};

    return dp[i][k] =   max(pick,nonPick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
	for(int i=weight[0];i<=maxWeight;i++){
        dp[0][i] = value[0];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=maxWeight;j++){
            int nonPick = dp[i-1][j];
            int pick = INT_MIN;
            if( j >= weight[i]){
                pick = dp[i-1][j-weight[i]]+value[i];
            }
            dp[i][j] = max(nonPick,pick);
        }
    }
    return dp[n-1][maxWeight];
}
