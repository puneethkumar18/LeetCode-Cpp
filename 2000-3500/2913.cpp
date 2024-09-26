class Solution {
public:
    
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int> temp;
            for(int j=i;j<nums.size();++j){
                temp.insert(nums[j]);
                ans += temp.size()*temp.size();
            }
        }
        return ans;
    }
};
