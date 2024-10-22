class Solution {
public:
    int minimumMoves(string s) {
        string temp = "";
        int i=0;
        int count = 0;
        stack<char> st;
        while(i<s.length()){
            if(st.size() == 3){
                count++;
                while(!st.empty()){
                    st.pop();
                }
            }if((st.empty() && s[i] != 'O') || (!st.empty())){
                st.push(s[i]);
            }
            i++;
        }
        if(!st.empty()){
            return count+1;
        }
        return count;
    }
};
