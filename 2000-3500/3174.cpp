class Solution {

private:
    bool isDigit(char ch) {
        string re = "1234567890";
        for (int i = 0; i < re.size(); i++) {
            if (re[i] == ch) {
                return true;
            }
        }
        return false;
    }

public:
    string clearDigits(string s) {
        int l = s.length();
        stack<char> st;
        for (int i = 0; i < l; i++) {
            if (!st.empty() && isDigit(s[i])) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        s = "";
        stack<char> temp;
        while (!st.empty()) {

            temp.push(st.top());
            st.pop();
        }
        while (!temp.empty()) {
            s += temp.top();
            temp.pop();
        }
        return s;
    }
};
