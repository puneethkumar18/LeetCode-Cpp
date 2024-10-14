class Solution {
public:
    void update(vector<vector<int>>& mat,int i,int j,int n,int m){
        vector<int> temp;
        int row  = i;
        int col = j;
        while(row < n && col < m){
            temp.push_back(mat[row][col]);
            col++;
            row++;
        }
        int k = 0;
        sort(temp.begin(),temp.end());
        cout<<endl;
        while(i < n && j < m){
            mat[i][j] = temp[k];
            i++;
            j++;
            k++;
        }
        cout<<endl;
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int i=0;i<m;i++){
            update(mat,0,i,n,m);
        }
        for(int i=1;i<n;i++){
            update(mat,i,0,n,m);
        }
        return mat;
    }
};
