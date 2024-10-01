class Solution {
public:
    void solve(vector<vector<int>>& arr){
        int index = arr.size()-1;
        vector<int> temp ;
        temp.push_back(1);
        for(int i=0;i<arr[index].size()-1;i++){
            temp.push_back(arr[index][i]+arr[index][i+1]);
        }
        temp.push_back(1);
        arr.push_back(temp);
    }
    vector<vector<int>> generate(int numRows) {
        if(numRows <= 0){
            return {{}};
        }
        vector<vector<int>> ans = {{1},{1,1}};
        if(numRows == 2){
            return ans;
        }
        if(numRows == 1){
            return {{1}};
        }

        for(int i=2;i<numRows;i++){
            solve(ans);
        }
        return ans;
    }
};
