#include<bits/stdc++.h>

int f(int i,int buy,int n,vector<int>& prices,vector<vector<int>> dp){
    if(i >= n )return 0;
    //if(k == 0)return 0;
    if(dp[i][buy] != -1)return dp[i][buy];
    int profit = 0;
    if(buy){
        profit = max(-prices[i]+f(i+1,0,n,prices,dp),f(i+1,1,n,prices,dp));
    }else{
        profit = max(prices[i]+f(i+2,1,n,prices,dp),f(i+1,0,n,prices,dp));
    }
    return dp[i][buy] = profit;
}
int stockProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    //memorization
    // vector<vector<int>> dp(n,vector<int>(2,-1));
    // return f(0,1,n,prices,dp);
    vector<int> prev(2,0);
    vector<int> faar(2,0);
    vector<int> curr(2,0);
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=1;j++){
            if(j == 1){
                curr[j] = max(-prices[i]+prev[0],prev[1]);
            }else{
                curr[j] = max(prices[i]+faar[1],prev[0]);
                
            }
        }
        faar = prev;
        prev = curr;
    }
     return prev[1];
}
