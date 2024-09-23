class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";
        for(auto i:s){
            if(i == ' '){
                if(temp != ""){
                    
                    st.push(temp);
                    
                }
                temp  = "";
                continue;
            }
            temp += i;
        }
        if(temp != "")st.push(temp);
        string ans = "";

        while(!st.empty()){
            ans += st.top()+" ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};
