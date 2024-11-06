class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());

        for (int i=1;i<nums.size();i++){
            int temp = abs(nums[i]-nums[i-1]);
            if(temp > ans){
                ans = temp;
            }
        }
        return ans;
    }
};
