class Solution {
public:
    int getPower(int num){
        return pow(num,2);
    }
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = getPower(nums[i]);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
