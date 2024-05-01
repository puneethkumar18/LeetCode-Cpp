class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for (char i : s) {
            if (!st.empty()) {
                if (st.top() == 'A' && i == 'B') {
                    st.pop();
                } else if (st.top() == 'C' && i == 'D') {
                    st.pop();
                } else {
                    st.push(i);
                }
            }else{
                st.push(i);
            }
        }
        return st.size();
    }
};
