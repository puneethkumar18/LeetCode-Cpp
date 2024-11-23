class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        
        int n = box.size();
        int m = box[0].size();
        vector<vector<char>> ans(m,vector<char>(n));
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
                ans[i][j] = box[j][i];
           }
        }
        
        for(int i=0;i<m;i++){
            reverse(ans[i].begin(), ans[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=m-1;j>0;j--){
                if(ans[j][i] == '.' && ans[j-1][i] == '#'){
                    
                    swap(ans[j][i],ans[j-1][i]);
                   if(j < m-1){
                    j = j+2;
                   }
                }
            }
        }
        return ans;
    }
};
