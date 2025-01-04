class Solution {
public:
    unordered_set<string> mp;
    bool isPolindrome(string str) {
        int i = 0;
        int j = str.size() - 1;
        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    void dfs(string s, int index, string temp, int n) {
        if (temp.size() > 3) {
            return;
        }
        if (temp.size() == 3) {
            if (isPolindrome(temp)) {
                mp.insert(temp);
            }
            return;
        }
        for (int i = index; i < n; i++) {
            temp.push_back(s[i]);
            if (i == 0 || s[i] != s[i - 1])
                dfs(s, i + 1, temp, n);
            temp.pop_back();
        }
    }

    int countPalindromicSubsequence(string s) {

        // dfs(s,0,"",s.length());
        // for(auto i:mp){
        //     cout<<i<<endl;
        // }
        // return mp.size();
        vector<int> first(26, -1);
        vector<int> last(26, -1);

        for (int i = 0; i < s.length(); i++) {
            int curr = s[i] - 'a';
            if (first[curr] == -1) {
                first[curr] = i;
            }
            last[curr] = i;
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            if (first[i] == -1) {
                continue;
            }
            unordered_set<char> st;
            for (int j = first[i] + 1; j < last[i]; j++) {
                st.insert(s[j]);
            }
            res += st.size();
        }
        return res;
    }
};
