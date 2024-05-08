#include<stack>
#include<iostream>
using namespace std;
class BrowserHistory {
public:
    stack<string> forward1;
    stack<string> backward;
    BrowserHistory(string homepage) { this->backward.push(homepage); }

    void visit(string url) { 
        while(!forward1.empty()){
            forward1.pop();
        }
        this->backward.push(url); 
        }

    string back(int steps) {
        for (int i = 0; i < steps; i++) {
            if (this->backward.size() > 1) {
                this->forward1.push(this->backward.top());
                this->backward.pop();
            }else{
                break;
            }
        }
        return this->backward.top();
    }

    string forward(int steps) {
       for (int i = 0; i < steps; i++) {
            if (this->forward1.size() > 0) {
                this->backward.push(this->forward1.top());
                this->forward1.pop();
            }else{
                break;
            }
        }
        return this->backward.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
