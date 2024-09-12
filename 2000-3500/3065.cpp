class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(auto i:nums){
            if(i < k){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};
