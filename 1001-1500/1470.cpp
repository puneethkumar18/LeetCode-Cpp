class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = nums.size()/2;
        vector<int> ans;
        for(int i = 0;i < size;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
    return ans;
    }
};
