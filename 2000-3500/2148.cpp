class Solution {
public:
    bool solve(vector<int>& nums, int n, int index) {
        int curr = nums[index];
        if ((nums[((index - 1) + n) % n] > curr &&
             nums[((index + 1) + n )% n] < curr) ||
            (nums[((index - 1) + n) % n] < curr &&
             nums[((index + 1) + n) % n] > curr)) {
            return true;
        }
        return false;
    }
    int countElements(vector<int>& nums) {
        // int n = nums.size();

        // int res = 0;
        // for (int i = 0; i < n; i++) {
        //     if (solve(nums, n, i)) {
        //         res++;
        //     }
        // }
        // return res;

        if(nums.size() <= 2){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int i=0;
        int j = nums.size()-1;
        while(i < j){
            bool moved = false;
            if(nums[i] == nums[i+1]){
                i++;
                moved = true;
            }
            if(nums[j] == nums[j-1]){
                j--;
                 moved = true;
            }
            if(!moved){
                break;
            }
        }
        if(i >= j){
            return 0;
        }
        return j-i-1;
    }
};
