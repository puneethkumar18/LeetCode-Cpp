class Solution {
public:
    unordered_map<char,int> ma;
    Solution(){
        ma['I'] = 1;
        ma['V'] = 5;
        ma['X'] = 10;
        ma['L'] = 50;
        ma['C'] = 100;
        ma['D'] = 500;
        ma['M'] = 1000;
    }
    int romanToInt(string s) {
        stack<char> st;
        int ans = 0;
        for(char i:s){
            
            if(st.empty() || ma[st.top()] >= ma[i]){
                st.push(i);
            }
            else if(ma[st.top()] < ma[i]){
                int temp = ma[i];
                while(!st.empty() && ma[st.top()] < ma[i]){
                    temp -= ma[st.top()];
                    st.pop();
                }
                cout<<temp<<endl;
                ans += temp;
            }
        }
        
        while(!st.empty()){
            ans+= ma[st.top()];
            st.pop();
        }
        return ans;
    }
};
