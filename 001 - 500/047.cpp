class Solution {
public:     
    bool isPresent(vector<int> nums,vector<vector<int>>& ans){

        for(int i=0;i<ans.size();i++){
            bool present = true;
            for(int j=0;j<nums.size();j++){
                if(nums[j] != ans[i][j]){
                    present = false;
                    break;
                }

            }
            if(present){
                return true;
            }
        }
        return false;
    }
    void solve(vector<vector<int>>& ans,vector<int> nums,int index){
        if(index >= nums.size()){
            if(!isPresent(nums,ans)){
                ans.push_back(nums);
            }
            return ;
        }

        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            solve(ans,nums,index+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
       
        
        solve(ans,nums,0);
        return ans;
    }
};
