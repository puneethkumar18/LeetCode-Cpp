int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
	int totalSum = 0;
	for(int i=0;i<n;i++){
		totalSum += arr[i];
		
	}
	vector<vector<bool>> dp(n,vector<bool>(totalSum,0));
	
	for(int i=0;i<n;i++){
		dp[i][0] = true;
	}
	if(arr[0] <= totalSum)dp[0][arr[0]] = true;

	for(int i=1;i<n ;i++){
		for(int target=1;target<totalSum;target++){
			bool nonPick = dp[i-1][target];
			bool pick  = false;

			if(arr[i] <= target){
				pick = dp[i-1][target-arr[i]];
			}
			dp[i][target]= pick||nonPick;
		}
	}
	int res = INT_MAX;
	for(int i=0;i<totalSum;i++){
		
		if(dp[n-1][i] == true){
			res = min(res,abs((totalSum-i)-i));
			
		}
	}
	return res;
}
