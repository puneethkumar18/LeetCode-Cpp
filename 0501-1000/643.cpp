class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        for(int i=0;i<k;i++){
            ans += nums[i];
        }
        double res = ans/k;
        for(int i=k;i<nums.size();i++){
            double temp = ans-nums[i-k];
            temp += nums[i];
            ans = temp;
            if(ans/k > res){
                res = ans/k;
            }
        }
        return res;
    }
};
