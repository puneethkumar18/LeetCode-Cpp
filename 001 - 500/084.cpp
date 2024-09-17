class Solution {
private:
    vector<int> getPrevSmaller(vector<int> arr, int n) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            ans[i] = st.top();
            
            st.push(i);
        }
        return ans;

    }

    vector<int> getNextSmaller(vector<int> arr, int n) {
        stack<int> st;
        st.push(-1);
        vector<int>  ans(n);
        for (int i = n-1; i >=0; i--) {
            while (st.top() != -1 && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            ans[i] = st.top();
            
            st.push(i);
        }
        return ans;

    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int area = INT_MIN;
        int n = heights.size();
        vector<int> prev(n);
        prev = getPrevSmaller(heights, n);

        vector<int> next(n);
        next = getNextSmaller(heights, n);

        for (int i = 0; i < n; i++) {
            if(next[i] == -1){
                next[i] = n;
            }
            int height = heights[i];
            int width = next[i]-prev[i]-1;
            int a = width*height;

            area = max(area,a);
        }
        return area;
    }
};
