class Solution{
public:
    void solve(stack<int>& st ,int x){
        if(st.empty()){
            st.push(x);
            return ;
        }
        int num = st.top();
        st.pop();
        solve(st,x);
        st.push(num);
    }
    void Reverse(stack<int> &St){
        if(St.size()==0){
            return;
        }
        int num = St.top();
        St.pop();
        Reverse(St);
        solve(St,num);
    }
};
