class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int cnt = 0;
        long long temp = INT_MAX;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] < 0){
                    cnt++;
                }
               
                temp = min(temp,(long long)abs(matrix[i][j]));
                sum += abs(matrix[i][j]);
            }
        }
       
        if(cnt&1 ){
            sum -= (2*temp);
        }
        return sum;
    }
};
