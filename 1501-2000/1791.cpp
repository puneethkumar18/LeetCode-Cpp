class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> m ;
        for (auto i : edges) {
            for (int j = 0; j < i.size(); j++) {
                m[i[j]]++;
            }
        }
        for (auto i : m) {
            if (i.second == m.size()-1) {
                return i.first;
            }
        }
        return -1;
    }
};
