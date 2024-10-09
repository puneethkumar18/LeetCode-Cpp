class Solution {
public:
    void colUpdate(vector<vector<int>>& matrix,int col,int size){
        for(int i=0;i<size;i++){
            matrix[i][col] = 0;
        }
    }
    void rowUpdate(vector<vector<int>>& matrix,int row,int size){
        for(int i=0;i<size;i++){
            matrix[row][i] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<string,set<int>> m;
        int n = matrix.size();
        int o = matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<o;j++){
                if(matrix[i][j] == 0){
                    m["row"].insert(i);
                    m["col"].insert(j);

                }
            }
        } 
        cout<<"Rows"<<endl;
        for(auto i:m["row"]){
            cout<<i<<endl;
            rowUpdate(matrix,i,o);
        }
        cout<<"COLUMNS"<<endl;
        for(auto i:m["col"]){
            cout<<i<<endl;
            colUpdate(matrix,i,n);
        }
    }
};
