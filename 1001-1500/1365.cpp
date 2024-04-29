class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int res;
        for(int i=0;i<nums.size();i++){
            res = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j] < nums[i]){
                    if(i != j){
                        res++;
                    }
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};
