class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ma;

        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            ma[strs[i]].push_back(temp);
        }
        vector<vector<string>> res;
        for(auto i:ma){
            res.push_back(i.second);
        }
        return res;
    }
};
