class Solution {
public:
    int oneIndiceCount(int val){
        int ans = 0;
        while(val != 0){
            if(val&1){
                ans++;
            }
            val = val>>1;
        }
        return ans;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int temp = oneIndiceCount(i);
            if(temp == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};
