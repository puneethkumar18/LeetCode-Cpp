class Solution {
public:

    void getAllSubset(vector<int>& nums,vector<int> temp,int length,int n,vector<vector<int>>& ans){
        if(length == n){
            ans.push_back(temp);
            return;
        }
        getAllSubset(nums,temp,length+1,n,ans);
        temp.push_back(nums[length]);
        getAllSubset(nums,temp,length+1,n,ans);
    }
    int getXorValue(vector<int> arr){
        int ans = arr[0];
        for(int i=1;i<arr.size();i++){
            ans ^= arr[i];
        }
        return ans;
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> temp;
        int res = 0;
        getAllSubset(nums,temp,0,nums.size(),ans);
        for(int i=0;i<ans.size();i++){
            if(ans[i].size() == 0){
                continue;
            }else if (ans[i].size() == 1){
                res += ans[i][0];
            }else{
                int temp = getXorValue(ans[i]);
                res = res+temp;
            }
        }
        return res;
    }
};
