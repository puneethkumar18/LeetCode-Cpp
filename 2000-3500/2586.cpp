class Solution {
public:
    bool solve(string str) {
        char ch = str[0];
        char last = str[str.length() - 1];
        if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') &&
            (last == 'a' || last == 'e' || last == 'i' || last == 'o' ||
             last == 'u')) {
            return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int res = 0;
        for (int i = left; i <= right; i++) {
            if (solve(words[i])) {
                res++;
            }
        }
        return res;
    }
};
