class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                int ab = abs(nums[i] - nums[j]);

                int temp = nums[i] ^ nums[j];
                if(temp > ans && ab <= min(nums[i],nums[j])){
                    ans = temp;
                }
            }
        }
        return ans;
    }
};
