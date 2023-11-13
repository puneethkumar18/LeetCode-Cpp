class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> arr(2);
    int size = nums.size();
    
    for(int i = 0;i < size;i++ ){
        arr[0] = i;
        for(int j = i+1;j < size;j++){
            if((nums[i]+nums[j]) == target){
               arr[1] = j;
               return arr;
            }
        }
        }
    
        return arr;

    }
};