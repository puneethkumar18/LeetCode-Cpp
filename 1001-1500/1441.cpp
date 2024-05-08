class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st;
        vector<string> ans;
        int temp = 1;
        for (int i = 1; i <= target.size(); i++) {
            st.push(temp);
            ans.push_back("Push");
            for (int j = temp; j <= n; j++) {
                temp = st.top();
                if (st.top() != target[st.size() - 1]) {
                    st.pop();
                    ans.push_back("Pop");
                    st.push(++temp);
                    ans.push_back("Push");
                }else{
                    temp++;
                    break;
                }
            }
        }

        return ans;
    }
};
