class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<set<int>> col(n);
        for(int i=0;i<n;i++){
            set<int> row;
            for(int j=0;j<n;j++){
                row.insert(matrix[i][j]);
                col[j].insert(matrix[i][j]);
            }
            if(row.size() != n){
                return false;
            }  
        }
        for(auto i:col){
            if(i.size() != n){
                return false;
            }
        }
        return true;
    }
};
