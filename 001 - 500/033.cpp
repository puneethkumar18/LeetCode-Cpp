class Solution {
public:
    int pivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int binarysearch(vector<int>& nums, int s, int e, int target) {
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       
        int p = pivot(nums);
        cout<<p<<endl;
        int ans;
        if (target >= nums[p] && target <= nums[nums.size()-1]) {
            ans = binarysearch(nums, p, nums.size() - 1, target);
            
        } else {
            ans = binarysearch(nums, 0, p - 1, target);
            
        }
        return ans;
    }
};
