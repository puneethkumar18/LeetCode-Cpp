class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i] += mat[i][j];
            }
        }
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({i,arr[i]});
        }
        sort(temp.begin(),temp.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(temp[i].first);
        }
        return res;
    }
};
