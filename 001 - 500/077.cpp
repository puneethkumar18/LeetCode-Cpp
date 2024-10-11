class Solution {
public:
    void solve(int n, int k,vector<int> temp,vector<vector<int>>& ans,int index){
        if(temp.size() >= k){
            ans.push_back(temp);
            return ;
        }
        for(int i=index ;i<=n;++i){
            if(temp.size() == 0 || temp[temp.size()-1] < i){
                temp.push_back(i);
            solve(n,k,temp,ans,index+1);
            temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        
        solve(n,k,{},ans,1);
        return ans;
    }
};
