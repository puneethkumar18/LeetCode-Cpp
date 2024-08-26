class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& res,vector<int> ans,int val,int dest){
        ans.push_back(val);
        if(val == dest){
    
            res.push_back(ans);
        }
        for(auto i:graph[val]){
            dfs(graph,res,ans,i,dest);
        }

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> ans;
        dfs(graph,res,ans,0,graph.size()-1);
        return res;
    }
};
