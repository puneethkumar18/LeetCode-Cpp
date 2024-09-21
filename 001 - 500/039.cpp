class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates,int target,vector<int> temp,int index){
        if(target == 0){
            
            ans.push_back(temp);
            return ;
        }else if(target < 0 || index >= candidates.size()){
            return ;
        }
            temp.push_back(candidates[index]);
            solve(candidates,target-candidates[index],temp,index);
            temp.pop_back();
            solve(candidates,target,temp,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        int index = 0;
        solve(candidates,target,temp,index);
        
        
        return ans;
    }
};
