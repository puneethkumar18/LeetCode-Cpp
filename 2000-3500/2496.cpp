class Solution {
public:
    unordered_map<char, bool> mp;
    Solution() {
        mp['0'] = true;
        mp['1'] = true;
        mp['2'] = true;
        mp['3'] = true;
        mp['4'] = true;
        mp['5'] = true;
        mp['6'] = true;
        mp['7'] = true;
        mp['8'] = true;
        mp['9'] = true;
    }
    int solve(string str){
        for(auto i:str){
            if(!mp[i]){
                return str.length();
            }
        }
        return stoi(str);
    }
    int maximumValue(vector<string>& strs) {
        int res = 0;
        for(string i:strs){
            res = max(res,solve(i));
        }
        return res;
    }
};
