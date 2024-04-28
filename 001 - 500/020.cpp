class Solution {
public:
    bool isValid(string s) {
        int opt = 0;
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (st.empty()) {
                st.push(s.at(i));
            }
            else if (st.top() == '(' && s.at(i) == ')') {
                st.pop();
            }else if (st.top() == '[' && s.at(i) == ']') {
                st.pop();
            }else if (st.top() == '{' && s.at(i) == '}') {
                st.pop();
            }else{
                st.push(s.at(i));
            }
        }
        return st.empty();
    }
};
