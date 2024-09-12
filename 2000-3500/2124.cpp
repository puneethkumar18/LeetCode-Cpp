class Solution {
public:
    bool checkString(string s) {
        stack<char> st;
        st.push(s[0]);
       for(int i=1;i<s.length();i++){
            if(s[i] == 'a' && st.top() == 'b'){
                return false;
            }
            st.push(s[i]);
       } 
       return true;
    }
};
