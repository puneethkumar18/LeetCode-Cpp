class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans  = INT_MAX/2;
        int n = nums.size();
        for(int i=0;i<n-2;++i){
            
            int start = i+1;
            int end = n-1;
            while(start < end){
                int sum = nums[i]+nums[start]+nums[end];
                if(abs(sum-target) < abs(ans-target)){
                    ans = sum;
                }
                if(sum == target){
                    return ans;
                }else if(sum > target){
                    --end;
                }else{
                    ++start;
                }
            }
        }
        return ans;
    }
};
