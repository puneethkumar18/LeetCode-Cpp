class Solution {
public:
    bool valid(string str){
        stack<char> st;
        for(auto i:str){
           if(!st.empty() && i == ')' && st.top() == '('){
            st.pop();
           }else if(i == '('){
             st.push(i);
           }else{
            return false;
           }
        }
        return true;
    }
    void solve(vector<string>& ans,string temp,int close,int open){
        if(close <= 0 && open <= 0){
            temp += ")";
            if(valid(temp))
            ans.push_back(temp);
            return;
        }
        if(open > 0){
            temp += "(";
            solve(ans,temp,close,open-1);
            temp.pop_back();
        }
        if(close > 0){
            temp += ")";
            solve(ans,temp,close-1,open);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if(n <= 0){
            return ans;
        }
        string temp = "(";
        solve(ans,temp,n-1,n-1);
        return ans;
    }

};
