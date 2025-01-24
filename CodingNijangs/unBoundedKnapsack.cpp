#include<bits/stdc++.h>
int f(int ind,int k,vector<int> &profit, vector<int> &weight,vector<vector<int>>& dp){
    if(ind == 0){
        return (k/weight[0])*profit[0];
    }
    if(dp[ind][k]!= -1){
        return dp[ind][k];
    }
    int nonPick = f(ind-1,k,profit,weight,dp);
    int pick = INT_MIN;
    if(weight[ind] <= k){
        pick = profit[ind]+f(ind,k-weight[ind],profit,weight,dp);
    }
    return dp[ind][k] =  max(pick,nonPick);
}       
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    // Write Your Code Here.
    vector<vector<int>> dp(n,vector<int>(w+1,0));

    for(int i=0;i<=w;i++)
    {
        dp[0][i] = (i/weight[0])*profit[0];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<=w;j++){
            int nonPick = dp[i-1][j];
            int pick = INT_MIN;
            if(weight[i] <= j)pick = profit[i]+dp[i][j-weight[i]];
            dp[i][j] = max(nonPick,pick);
        }
    }
    return dp[n-1][w];
}
