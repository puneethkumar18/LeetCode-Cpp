class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0;
        int temp = nums[0];
        for(int i=1;i<nums.size();i++){
            temp += nums[i];
            if(temp == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
