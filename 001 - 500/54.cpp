class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col=0;
        int row=0;
        int rowEnd = m-1;
        int colEnd  = n-1;
        vector<int> ans;
        int count = 0;
        int size = n*m;

        while(count < size){
            for(int k=col;count < size && k<=colEnd;k++){
                count++;
                ans.push_back(matrix[row][k]);
            }
            row++;
            for(int k = row;count < size && k<=rowEnd;k++){
                count++;
                ans.push_back(matrix[k][colEnd]);
            }
            colEnd--;

            for(int k=colEnd;count < size && k>=col;k--){
                count++;
                ans.push_back(matrix[rowEnd][k]);
            }
            rowEnd--;

            for(int k=rowEnd;count < size && k>=row;k--){
                count++;
                ans.push_back(matrix[k][col]);
            }
            col++;
        }
        return ans;
    }
};
