
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unordered_map<int, string> list;
        for (int i = 0; i < n; i++) {
            list[heights[i]] = names[i];
        }
        sort(heights.rbegin(),heights.rend());
        vector<string> ans;
        
        for (int i = 0; i < n ; i++) {
            string temp = list[heights[i]];
            ans.push_back(temp);
        }
        return ans;
    }
};
