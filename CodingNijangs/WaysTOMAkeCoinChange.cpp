#include<bits/stdc++.h>

long f(int ind,int k,int* a,vector<vector<long>>& dp){
    if(ind == 0){
        return( k%a[0] == 0);
    }
    if(dp[ind][k] != -1){
        return dp[ind][k];
    }
    long pick = 0;
    long nonPick = f(ind-1,k,a,dp);
    if(a[ind] <= k)pick = f(ind,k-a[ind],a,dp);
    return dp[ind][k] =  pick+nonPick;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>> dp(n,vector<long>(value+1,0));
    for(int i=0;i<=value;i++){
        if(i%denominations[0] == 0)dp[0][i] = 1;
    }
   for(int i=1;i<n;i++){
       for(int j=0;j<=value;j++){
           long nonPick = dp[i-1][j];
           long  pick = 0;
           if(denominations[i] <= j)pick = dp[i][j-denominations[i]];
           dp[i][j] = pick+nonPick;
       }
   }
   return dp[n-1][value];
}
