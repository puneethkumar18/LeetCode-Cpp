class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
   
        st1.push(x);
    }
    
    int pop() {
        int temp ;
        while(!st1.empty()){
            temp = st1.top();
            st2.push(temp);
            st1.pop();
        }
        st2.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return temp;
    }
    
    int peek() {
        int temp ;
        while(!st1.empty()){
            temp = st1.top();
            st2.push(temp);
            st1.pop();
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return temp;
    }
    
    bool empty() {
        if(st1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
