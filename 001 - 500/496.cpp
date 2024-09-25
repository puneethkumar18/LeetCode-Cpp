class Solution {
public:
    int solve(vector<int>& nums,int num){
        bool flag = false;
        for(auto i:nums){
            if(i == num){
                flag = true;
            }
            if(i > num && flag){
                return i;
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto j:nums1){
            ans.push_back(solve(nums2,j));
        }
        return ans;
    }
};
