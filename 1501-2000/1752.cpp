class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0;
        int count = 0;
        while(i < nums.size()){
            if(nums[(i+1)%nums.size()] < nums[i]){
                count++;
            }
            i++;
        }
        if(count <= 1){
            return true;
        }
        return false;
    }
};
