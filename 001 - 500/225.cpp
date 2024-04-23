#include<queue>
class MyStack {
public:
    deque<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push_front(x);
    }
    
    int pop() {
        int pop = q.front();
        q.pop_front();
        return pop;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
