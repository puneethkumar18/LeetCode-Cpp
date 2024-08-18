class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans =0;
        int n = mat.size()-1;
        //primary diagonal
        int i =0;
        int j = 0;
        while(i <= n){
            ans += mat[i][j];
            i++;
            j++;
        }
        i = 0;
        j = n;
        while(i <= n){
            ans += mat[i][j];
            i++;
            j--;
        }
        if((n+1)%2 != 0){
            int index = n/2;
            ans -= mat[index][index];
        }
        return ans;
    }

};
