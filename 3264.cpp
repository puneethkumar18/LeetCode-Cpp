class Solution {
public:
    int minValueIndex(vector<int>& nums){
        int index = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] < nums[index]){
                index = i;
            } 
        }
        return index;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int index = minValueIndex(nums);
            nums[index] *= multiplier;
        }
        return nums;
    }
};
