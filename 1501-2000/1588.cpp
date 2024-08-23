class Solution {
public:
    void solve(vector<int>& arr,vector<vector<int>> &ans,int size){
        for(int i=0;i<=arr.size()-size;i++){
            vector<int> temp;
            for(int j=i;j<i+size;j++){
                temp.push_back(arr[j]);
            }
            ans.push_back(temp);
        }
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<vector<int>> ans;
        
        int size = arr.size();
        int i=1;
        while(size > 0){
            
            solve(arr,ans,i);
            i = i+2;
            size = size-2;
        }
        int res = 0;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                res += ans[i][j];
            }
        }
        return res;
    }
};
