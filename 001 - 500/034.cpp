class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        vector<int> ans = {-1,-1};
        int j = nums.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target ){
                ans[0] = mid;
                j = mid-1;
            }else if(nums[mid] > target){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        i = 0;
        j = nums.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target ){
                ans[1] = mid;
                i = mid+1;
            }else if(nums[mid] > target){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return ans;
    }
};
