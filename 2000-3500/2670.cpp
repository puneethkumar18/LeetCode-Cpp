class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        set<int> left;
        vector<int> prefix(n);
        for(int i=0;i<n;i++){
            left.insert(nums[i]);
            prefix[i] = left.size();
        }
        set<int> right;
        vector<int> suffix(n);
        for(int i=n-1;i>=0;i--){
            suffix[i] = right.size();
            right.insert(nums[i]);
            
        }

        for(int i=0;i<n;i++){
            ans[i] = prefix[i]-suffix[i];
        }
        return ans;
    }
};
