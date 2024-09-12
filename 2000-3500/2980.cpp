class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 == 0){
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] % 2 == 0){
                     return true;
                }
              }
            }
            
        }
        return false;
    }
};
