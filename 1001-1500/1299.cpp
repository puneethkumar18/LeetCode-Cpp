class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> st;
        st.push(-1);
        for(int i=arr.size()-1;i>0;i--){
            if(st.top() < arr[i]){
                st.push(arr[i]);
            }else{
                st.push(st.top());
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
