class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        unordered_map<int,int> diffCount;

        for(int i=0;i<n;i++){
            int diff = i-nums[i];
            int goodPairsCount = diffCount[diff];


            res += i-goodPairsCount;

            diffCount[diff] = goodPairsCount+1;
        }
        return res;
    }
};
