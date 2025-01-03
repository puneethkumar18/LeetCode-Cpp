class Solution {
public:
    vector<long long> getPrefixSum(vector<int>& nums){
        vector<long long> res;
        int n = nums.size();
        res.push_back(nums[0]);
        for(int i=1;i<n;i++){
            res.push_back((long long)res[i-1]+(long long)nums[i]);
        }
        return res;
    }
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> prefix = getPrefixSum(nums);
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n-1;i++){
            long long first = prefix[i];
            long long last = prefix[n-1] - first;
            if(first >= last){
                res++;
            }
        }
        return res;
    }
};
