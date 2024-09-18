class MinStack {
public:
    stack<int> st;
    stack<int> mini;

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini.push(val);
        }else{
            int temp = min(mini.top(),val);
            st.push(val);
            mini.push(temp);
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
            mini.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
