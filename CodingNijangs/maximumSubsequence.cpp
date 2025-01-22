#include <bits/stdc++.h> 

int f(int index,vector<int> &nums,vector<int>& dp){
    if(index == 0)return nums[index];
    if(index < 0)return 0;
    if(dp[index]){
        return dp[index];
    }
    int pick = nums[index]+f(index-2,nums,dp);
    int nonPick = 0+f(index-1,nums,dp);
    return dp[index] =  max(pick,nonPick);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

    int n = nums.size();
    // vector<int> dp(n,0);
    // dp[0] = nums[0];
    //dp[1] = nums[1];
    int last = nums[0];
    int first = max(nums[1],nums[0]);
    for(int i=2;i<n;i++){

        int pick = nums[i]+last;
        int nonPick = first;
        last = first;
        first = max(pick,nonPick);
        // int pick = nums[i];
        // if(i > 1){
        //     pick += dp[i-2];
        // }
        // int nonPick = 0+dp[i-1];
        // dp[i] = max(pick,nonPick);
    }
    return first;
}
