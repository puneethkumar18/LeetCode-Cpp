class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string res ;
        for (char i : s) {
            if (st.empty()) {
                st.push(i);
            } else {
                if (i == st.top()) {
                    st.pop();
                } else {
                    st.push(i);
                }
            }
        }
        while(!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        return res;
    }
};
