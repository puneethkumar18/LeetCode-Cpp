class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>m;
        for(auto i:items1){
            m[i[0]] = m[i[0]]+i[1];
        }
        for(auto i:items2){
            m[i[0]] = m[i[0]]+i[1];
        }
        vector<vector<int>> ans;

        for(auto i:m){
            vector<int> temp;
            temp.push_back(i.first);
             temp.push_back(i.second);
             ans.push_back(temp);
        }
        
        return ans;
    }

};
