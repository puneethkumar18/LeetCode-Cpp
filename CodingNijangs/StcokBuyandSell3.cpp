#include<bits/stdc++.h>

int f(int i,int n,int t,int buy,vector<int>& prices,vector<vector<vector<int>>>& dp){
    if(i == n)return 0;
    if(t  == 0) return 0;
    if(dp[i][buy][t] != -1)return dp[i][buy][t];
    int profit = 0;
    if(buy){
        profit = max(-prices[i]+f(i+1,n,t,0,prices,dp),f(i+1,n,t,1,prices,dp));
    }else{
        profit = max(prices[i]+f(i+1,n,t-1,1,prices,dp),f(i+1,n,t,0,prices,dp));
    }
    return dp[i][buy][t] = profit;
}
int fun(int i,int t,int n,vector<int>& prices,vector<vector<int>>& dp){
    if(t == 0)return 0;
    if(i == n )return 0;

    if(dp[i][t] != -1){
        return dp[i][t];
    }
    if(t%2 == 0){
        dp[i][t] = max(-prices[i]+fun(i+1,t-1,n,prices,dp),fun(i+1,t,n,prices,dp));
    }else{
        dp[i][t] = max(prices[i]+fun(i+1,t-1,n,prices,dp),fun(i+1,t,n,prices,dp));
    }
    return dp[i][t];
}
int maxProfit(vector<int>& prices)
{
    // Write your code here.
    int n = prices.size();
    //vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
    //return f(0,n,2,1,prices,dp);

    // for(int i=n-1;i>=0;i--){
    //     for(int j=0;j<2;j++){
    //         for(int k=1;k<3;k++){
    //             if(j == 1){
    //                 dp[i][j][k] = max(-prices[i]+dp[i+1][0][k],dp[i+1][1][k]);
    //             }else{
    //                 dp[i][j][k] = max(prices[i]+dp[i+1][1][k-1],dp[i+1][0][k]);
    //             }
    //         }
    //     }
    // }
    // return dp[0][1][2];

    vector<vector<int>> dp(n,vector<int>(4+1,-1));
    return fun(0,4,n,prices,dp);
}
