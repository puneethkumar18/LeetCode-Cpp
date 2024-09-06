class Solution {
public:
    void solve(stack<int>& st,int n,vector<int>& dp){
        if(n == 0){
            st.push(0);
            return ;
        }
        int temp = n;
        int count = 0;
        while(temp != 0){
            count = count+(temp%2);
            temp = temp/2;
        }
        st.push(count);
        solve(st,n-1);
    }
    vector<int> countBits(int n) {
        stack<int> st;
        solve(st,n);
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
