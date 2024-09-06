class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index = 0;
        int size = nums.size();
        for(int i=1;i<size;i++){
            if(nums[(i-1)%size] < nums[i] && nums[(i+1)%size] < nums[i]){
                index = i;
            }
        }
        return index;
    }
};
