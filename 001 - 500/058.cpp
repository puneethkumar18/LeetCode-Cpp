class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        while(s[n] == ' '){
            n--;
        }
        stack<char> st;

        for(int i=n;i>=0;i--){
            if(s[i] == ' '){
                break;
            }
            st.push(s[i]);
        }
        return st.size();
    }
};
