class Solution {
public:
    string solve(string str1, string str2) {
        string temp = "";

        for (int i = 0; i < str2.size(); i++) {
            if (str1[i] != str2[i]) {
                return temp;
            } else {
                temp += str1[i];
            }
        }
        return temp;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string res = solve(ans,strs[i]);
            ans = ans.length() > res.length() ? res :ans;
        }
        return ans;
    }
};
