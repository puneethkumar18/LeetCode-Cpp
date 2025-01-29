#include<bits/stdc++.h>

int f(int i,int j,string s,string t,vector<vector<int>>& dp){
	if(i < 0 || j < 0){
		return 0;
	}
	if(dp[i][j] != -1){
		return dp[i][j];
	}
	if(s[i] == t[j]){
		return dp[i][j] = 1+f(i-1,j-1,s,t,dp);
	}
	return dp[i][j] =  max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
}


int minimumInsertions(string &str)
{
	// Write your code here.
	int n = str.length();

	string str1 = str;
	reverse(str1.begin(),str1.end());
	vector<vector<int>> dp(n+1,vector<int>(n+1,0));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if( i==0 || j==0){
				continue;
			}
			if(str[i-1]==str1[j-1]){
				dp[i][j] = 1+dp[i-1][j-1];

			}else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return n-dp[n][n];
}
