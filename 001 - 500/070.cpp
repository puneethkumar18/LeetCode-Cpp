class Solution {
public:
    int  solve(int i,vector<int>& dp){
        if(dp[i] != -1){
            return dp[i];
        }
        return dp[i] = solve(i-1,dp)+solve(i-2,dp);
    }
    int climbStairs(int n) {
        
        vector<int> dp(n+1,-1);
        dp[0] = 1;
        dp[1] = 1;
        
        solve(n,dp);
        return dp[n];
    }
};
