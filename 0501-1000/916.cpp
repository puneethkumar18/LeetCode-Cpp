class Solution {
public:
    unordered_map<char, int> mp1;
    bool solve(string str) {

        unordered_map<char, int> mp2;

        for (char ch : str) {
            mp2[ch]++;
        }
        for (auto i : mp1) {
            if (i.second > mp2[i.first]) {
                return false;
            }
        }
        return true;
    }
    void update(vector<string>& words) {
        unordered_map<char, int> mp;
        for (string st : words) {
            for (char ch : st) {
                mp[ch]++;
            }
            for (auto i : mp) {
                mp1[i.first] = max(i.second, mp1[i.first]);
            }
            mp.clear();
        }
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        vector<string> res;
        update(words2);
        for (auto i : words1) {
            if(solve(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};
