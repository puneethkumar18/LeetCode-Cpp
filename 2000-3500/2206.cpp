class Solution {
public:
    int findMaxK(vector<int>& nums) {
       int ans = -1;
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                return -1;
            }
            int temp1 = nums[i];
            int toFind = temp1*(-1);
            int temp = i;
            while(nums[temp] <= toFind && temp != nums.size()-1) {
                if(nums[temp+1] == toFind){
                    return nums[temp+1];
                }
                temp = temp+1;
            }
       }
       return -1;
    }
};
