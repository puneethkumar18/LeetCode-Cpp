class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
  
        if (nums.size() < 2) {
            return nums;
        }
        int e = 0;
        int o = 1;
        while (e < nums.size() && o < nums.size()) {
            if (nums[e] % 2 != 0 && nums[o]%2 == 0 ) {
                swap(nums[e], nums[o]);
                e += 2;
                o += 2;
            } else if (nums[e] % 2 == 0) {
                e  = e+ 2;
            }else if(nums[o]%2 != 0){
                o = o + 2;
            }
        }
        return nums;
    }
};
