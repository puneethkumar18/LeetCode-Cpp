class Solution {
public:
    unordered_map<char, bool> mp;

    Solution() {
        mp['a'] = true;
        mp['e'] = true;
        mp['i'] = true;
        mp['o'] = true;
        mp['u'] = true;
    }
    vector<pair<int, bool>> getSolve(vector<string>& words) {
        int n = words.size();
        vector<pair<int, bool>> res;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            char last = words[i][words[i].size() - 1];
            char first = words[i][0];
            if (mp[last] && mp[first]) {
                temp++;
                res.push_back({temp, true});
            } else {
                res.push_back({temp, false});
            }
        }
        return res;
    }
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {

        vector<pair<int, bool>> modified = getSolve(words);
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            int f = queries[i][0];
            int l = queries[i][1];
            res.push_back(modified[l].first-modified[f].first);
            if(modified[f].second){
                res[i] +=1;
            }
            
        }
        return res;
    }
};
