class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int totalNums = n*n;
        vector<int> arr(totalNums+1,0);

        for(auto i:grid){
            for(auto j:i){
                arr[j]++;
            }
        }
        vector<int> ans;
        int a;
        int b;
        for(int i=1;i<totalNums+1;i++){
            if(arr[i] == 0){
                b = i;
            }
            if(arr[i] > 1){
                a = i;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
