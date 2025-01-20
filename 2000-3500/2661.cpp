class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,pair<int,int>> mp;

        int n = mat.size();
        int m = mat[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[mat[i][j]] = {i,j};
            }
        }
        int res = 0;
        vector<int> row(n,0);
        vector<int> col(m,0);
        for( res=0;res<arr.size();res++){
            pair<int,int > temp  = mp[arr[res]];
            row[temp.first]++;
            
            if(row[temp.first] >= m){
                break;
            }
            col[temp.second]++;
            if(col[temp.second] >= n){
                break;
            }
        }
        return res;
    }   
};
