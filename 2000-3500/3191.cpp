class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int i;
        for( i=0;i<=nums.size()-3;i++){
            if(nums[i] == 1){
                continue;
            }
            ans++;
            for(int j=0;j<3;j++){
                if(nums[i+j] == 0){
                    nums[i+j] =1;
                }else{
                    nums[i+j] =0;
                }
            }
        }
        for(int k =i;k<nums.size();k++){
            if(nums[k] != 1){
                return -1;
            }
        }
        return ans;
    }
};
