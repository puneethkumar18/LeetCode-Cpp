class Solution {
public:

    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 0;

        stack<int> st;
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(cnt == 0 || i == 0|| nums[i-1] < nums[i]){
                cnt++;
            }else{
                res = max(res,cnt);
                cnt = 0;
                i--;
            }
        }
        res = max(res,cnt);
        cnt = 0;
        for(int i=n-1;i>=0;i--){
            if(cnt == 0 || i == n-1|| nums[i] > nums[i+1]){
                cnt++;
            }else{
                res = max(res,cnt);
                cnt = 0;
                i++;
            }
            
        }
         res = max(res,cnt);
        return res;
    }
};
