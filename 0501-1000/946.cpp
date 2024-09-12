#include<stack>
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int size = popped.size();
        int i=1;
        int j=0;
        st.push(pushed[0]);
        while(j != size){
            if( i != size && ( st.empty() || st.top() != popped[j] )){
                st.push(pushed[i]);
                i++;
            }else if(st.top() == popped[j]){
                st.pop();
                j++;
            }
            else{
                return false;
            }

        }
        return true;
    }
};
