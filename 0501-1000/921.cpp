class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(char i:s){
           if(!st.empty() && st.top() == '(' && i == ')'){
                st.pop();
            }
            else{
               st.push(i);
            }
        }
        return st.size();
    }
};
