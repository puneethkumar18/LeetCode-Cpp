class Solution {
public:
    void solve(unordered_map<int,int>& m,vector<vector<int>>& ans){
        vector<int> temp;
        for(auto i:m){
            if(i.second > 0){
                temp.push_back(i.first);
                m[i.first]--;
            }
        }
        ans.push_back(temp);
    }
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<vector<int>> ans;
        int n = 0;
        for(auto i:nums){
            m[i]++;
            if(m[i] > n){
                n = m[i];
            }
        }
        for(int i=0;i<n;i++){
            solve(m,ans);
        }
        
        return ans;
    }
};
