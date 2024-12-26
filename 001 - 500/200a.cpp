class Solution {
public:
    void solve(int index,int temp,int& count ,vector<int>& nums,int target){
        if(index >= nums.size()){
            if(temp == target){
                count++;
            }
            return;
        }
        int num = nums[index];
        solve(index+1,temp-num,count,nums,target);
        solve(index+1,temp+num,count,nums,target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        solve(0,0,count,nums,target);
        return count;
    }
};
