class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> st;
        for(auto i:s){
            st.insert(i);
        }
        return st.size();
    }
};
