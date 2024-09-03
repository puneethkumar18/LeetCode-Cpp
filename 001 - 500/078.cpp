class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &ans,int index,vector<int> temp){
        if(index == nums.size()){
            ans.push_back(temp);
            return ;
        }
        solve(nums,ans,index+1,temp);
        temp.push_back(nums[index]);
        solve(nums,ans,index+1,temp);

        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums,ans,0,temp);

        return ans;
    }
};
