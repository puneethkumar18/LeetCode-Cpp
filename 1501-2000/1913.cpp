class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size= nums.size();
        int firstProduct = nums[0]*nums[1];
        int secondProduct = nums[size-1]*nums[size-2];
        int res = secondProduct-firstProduct;
        return res;
    }
};
