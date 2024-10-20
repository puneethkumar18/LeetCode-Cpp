class Solution {
public:
    bool solve(string str, int& index, char symbol) {
        stack<char> st;

        while (index < str.length()) {
            if (str[index] == '|' || str[index] == '&' || str[index] == '!') {
                index++;
                bool res = solve(str, index, str[index - 1]);
                if(res){
                    st.push('t');
                }else{
                    st.push('f');
                }
            } else if (str[index] == ')') {
                index++;
                break;
            } else if (str[index] != ','){
                st.push(str[index]);
            }
                
            index++;
        }

        bool res =  st.top()=='t' ? true : false;
        st.pop();

        if(st.top() ==  '(' && symbol == '!'){
            
                res = !res;
            
        }
        while (!st.empty() && st.top() != '(') {
            bool temp = st.top()=='t' ? true : false;
            st.pop();
            if (symbol == '|') {
                res  |= temp;
            } else if (symbol == '&') {
                res &= temp;
            } else {
                res = !res;
            }
        }
        return res;
    }
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for(char ch:expression)
        {
            if(ch != ')' && ch != ','){
                st.push(ch);
            }else if(ch == ')'){
                vector<bool> arr;
                while(!st.empty() && st.top() != '('){
                    char t = st.top();
                    st.pop();
                    if(t == 't')arr.push_back(true);
                    else arr.push_back(false);
                }
                st.pop();
                if(!st.empty()){
                    char t = st.top();
                    st.pop();
                    bool v = arr[0];

                    if(t == '&'){
                        for(bool b:arr) v&=b;
                    }else if(t == '|'){
                        for(bool b:arr) v|=b;
                    }else{
                        v = !v;
                    }

                    if(v) st.push('t');
                    else st.push('f');
                }
            }
        }
        return st.top() == 't' ? true : false;
    }
};
