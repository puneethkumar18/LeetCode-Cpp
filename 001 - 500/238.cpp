class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int temp = 0;
        int isZero = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                isZero++;
            }else{
                if(temp == 0){
                    temp =nums[i];
                }else{
                    temp *= nums[i];
                }
            }
        }

        if(isZero > 1){
            return vector<int> (nums.size(),0);
        }

        for(int i=0;i<nums.size();i++){
            if(isZero){
                if(nums[i] != 0){
                    nums[i] = 0;
                }else{
                    nums[i] = temp;
                }
            }else{
                nums[i] = temp/nums[i]; 
            }
        }
        return nums;
    }
};
