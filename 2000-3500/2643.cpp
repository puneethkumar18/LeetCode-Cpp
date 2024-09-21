class Solution {
public:
    int solve(vector<int> arr){
        int ans = 0;
        for(auto i:arr){
            ans += i;
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count  = INT_MIN;
        int indices = 0;
        int n = mat.size();

        for(int i=0;i<n;i++){
            int temp = solve(mat[i]);

            if(temp > count){
                count = temp;
                indices = i;
            }
        }
        
        return {indices,count};
    }
};
