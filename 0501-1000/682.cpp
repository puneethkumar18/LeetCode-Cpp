
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (auto i : operations) {
            if (st.empty())
                st.push(stoi(i));
            else {
                if (i == "D") {
                    st.push(2*st.top());
                } else if (i == "C") {
                    st.pop();
                } else if (i == "+") {
                    int top = st.top();
                    st.pop();
                    int sum = top + st.top();
                    st.push(top);
                    st.push(sum);
                } else {
                    st.push(stoi(i));
                }
            }
        }
        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
