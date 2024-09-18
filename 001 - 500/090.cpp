class Solution {
public:
    void solve(vector<int>& nums,int index,set<vector<int>>& ans,vector<int> temp){
        if(index >= nums.size()){
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return ;
        }
        solve(nums,index+1,ans,temp);
        temp.push_back(nums[index]);
        solve(nums,index+1,ans,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        solve(nums,0,ans,temp);
        vector<vector<int>> res;
        for(auto i:ans){
            res.push_back(i);
        }
        return res;
    }
};
