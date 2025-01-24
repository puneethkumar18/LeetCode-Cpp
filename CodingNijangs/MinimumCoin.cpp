#include <bits/stdc++.h> 

int f(int i,int k,vector<int>& num,vector<vector<int>>& dp){
    // if(k == 0){
    //     return INT_MAX;
    // }
    if(i == 0){
        return k%num[0] == 0 ? k/num[0]:1e9;
       
    }
    if(dp[i][k] != -1)return dp[i][k];
    int pick = INT_MAX;
    int nonPick = f(i-1,k,num,dp);
    if(num[i] <= k ){
        pick = 1+f(i,k-num[i],num,dp);
    }
    //cout<<i<<" "<<k<<" "<<min(pick,nonPick)<<endl;
    return dp[i][k] = min(pick,nonPick);
}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(x+1,-1));
    int res = f(n-1,x,num,dp);
    if( res >= 1e9)return -1;
    return res;
}
