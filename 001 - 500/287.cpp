class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto i:nums){
            ans[i]++;
            if(ans[i] > 1){
                return i;
            }
        }
        return -1;
    }
};
