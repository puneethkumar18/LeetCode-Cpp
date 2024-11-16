class Solution {
public:
    int solve(vector<int>&  nums ,int index,int k){
        int i;
        for( i=index;i<(index+k)-1;i++){
            if(nums[i+1] != nums[i]+1){
                return -1;
            }
        }
        
        return nums[i];
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n-k+1;i++){
            ans.push_back(solve(nums,i,k));
        }
        return ans;
    }
};
