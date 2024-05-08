class CustomStack {
private:
    int maxSize ;
    stack<int> st;
public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(st.size() < maxSize){
            st.push(x);
        }
    }
    
    int pop() {
        if(st.size() == 0){
            return -1;
        }else{
            int temp = st.top();
            st.pop();
            return temp;
        }
        
    }
    
    void increment(int k, int val) {
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty()){
            if(k != 0){
                st.push(temp.top()+val);
                temp.pop();
                k--;
            }else{
                st.push(temp.top());
                temp.pop();
            }
        }

    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
