class Solution {
private:
    void leftSum(vector<int>& nums, vector<int>& left) {
        left.push_back(0);
        for (int i = 1; i < nums.size(); i++) {
            left.push_back(nums[i - 1] + left[i - 1]);
        }
    }
    void rightSum(vector<int>& nums, vector<int>& right) {
        for(int i=0;i<nums.size();i++){
            int temp = 0;
            for(int j=i+1;j<nums.size();j++){
                temp += nums[j];
            }
            right.push_back(temp);
        }
        
    }

public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        leftSum(nums, left);
        rightSum(nums, right);
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = abs(left[i] - right[i]);
        }
        return nums;
    }
};
