class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int sum = nums[i]+nums[j];
                if(sum < target){
                    res += 1;
                }
            }
        }
        return res;
    }
};
