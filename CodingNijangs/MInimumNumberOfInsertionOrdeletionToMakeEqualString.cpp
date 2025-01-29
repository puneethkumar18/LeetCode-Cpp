int f(int i,int j,string s,string t,vector<vector<int>> dp){
    if( i < 0 || j < 0){
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
int canYouMake(string &s1, string &s2){
    // Write your code here.
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    vector<int> prev(m+1,0);
    for(int i=1;i<=n;i++){
        vector<int> curr(m+1,0);
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                curr[j] = 1+prev[j-1];
            }else{
                curr[j] = max(prev[j],curr[j-1]);
            }
        }
        prev = curr;
    }

    return (n+m)-(2*prev[m]) ;
}
