#include<bits/stdc++.h>

int f(int index,int last,vector<vector<int>> &points,vector<vector<int>>& dp){
    if(index == 0){
        int maxi = 0;
        for(int i=0;i<=2;i++){
            if(i != last){
                maxi = max(maxi,points[index][i]);
            }
        }
        return maxi;
    }
    if(dp[index][last] != -1){
        return dp[index][last];
    }
    int maxi = 0;
    for(int i=0;i<=2;i++){
        if(i != last){
            int point = points[index][i]+f(index-1,i,points,dp);
            maxi = max(maxi,point);
        }
    }
    return dp[index][last] =  maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.

    vector<vector<int>> dp(n,vector<int>(4,-1));
    dp[0][0] = max( points[0][1], points[0][2]);
    dp[0][1] = max( points[0][0], points[0][2]);
    dp[0][2] = max( points[0][1], points[0][0]);
    dp[0][3] = max( points[0][1], max(points[0][2],points[0][0]));
    for(int i=1;i<n;i++){
        for(int j=0;j<4;j++){
            int maxi = 0;
            dp[i][j] = 0;
            for(int k=0;k<3;k++){
                if(k != j){
                    int point = dp[i-1][k]+points[i][k];
                    maxi = max(maxi,point);
                }
            }
            dp[i][j] = maxi;
        }
    }
    return dp[n-1][3];
}
