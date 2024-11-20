class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int curr = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            curr += nums[i];
            while( curr >= target){
                ans = min(ans,i-start+1);
                curr -= nums[start];
                start++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
