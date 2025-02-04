class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        int res = 0;
        temp += nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                temp += nums[i];
            }else{
                res = max(res,temp);
                temp = nums[i];
            }
        }
        res = max(res,temp);
        return res;
    }
};
