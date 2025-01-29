#include <bits/stdc++.h> 
int f(int i,int j ,string s,string t,vector<vector<int>>& dp){
    if(i <0 || j<0){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(s[i] == t[j]){
        return dp[i][j] =  1+f(i-1,j-1,s,t,dp);
    }
    return dp[i][j] =  max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
}
int longestPalindromeSubsequence(string s)
{
    // Write your code here.
    int n = s.size();
    string s1 = s;
    reverse(s1.begin(),s1.end()); 
    vector<vector<int>> dp(n,vector<int>(n,-1));
    //cout<<s<<"->"<<s1<<endl;
    return f(n-1,n-1,s,s1,dp);
}
