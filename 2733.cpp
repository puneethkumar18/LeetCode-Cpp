class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[nums.size()-1];

        for(auto i:nums){
            if( i < maxi&& i > mini){
                return i;
            }
        }
        return -1;
    }
};
