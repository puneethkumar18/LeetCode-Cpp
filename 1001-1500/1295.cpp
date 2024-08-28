class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            while (nums[i] > 9) {
                nums[i] = nums[i] / 10;
                temp++;
            }
            if(temp%2 != 0){
                ans++;
            }
        }
        return ans;
    }
};
