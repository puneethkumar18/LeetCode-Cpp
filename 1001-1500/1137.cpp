class Solution {
public:
    int getCount(vector<int> num){
        int ans=0;
        for(int i=0;i<num.size();i++){
            if(num[i] == 1){
                ans++;
            }
        }
        return ans;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int count = getCount(mat[i]);
            m[i] = count;
            ans.push_back(count);
        }
        sort(ans.begin(),ans.end());
    
        vector<int> res;
        for(int i =0;i<k;i++){
            for(int j=0;j<m.size();j++){
                if(m[j] == ans[i]){
                    res.push_back(j);
                    m[j] = -1;
                    break;
                }   
            }
        }
        return res;
    }
};
