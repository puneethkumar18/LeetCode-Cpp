class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int res = INT_MAX;
        int n = nums.size();
        for (int i = 0; i <= n - l; i++) {
            int temp = nums[i];
            if (l == 1 && temp < res && temp > 0) {
                res = temp;
            }
            for (int j = i + 1; j < n; j++) {
                temp += nums[j];
                if (j - i >= r) {
                    break;
                }

                if (j - i + 1 >= l && temp < res && temp > 0) {
                    
                    res = temp;

                }
            }
        }
        if (res == INT_MAX) {
            return -1;
        }
        return res;
    }
};
