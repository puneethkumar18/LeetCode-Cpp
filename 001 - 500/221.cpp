class Solution {
public:
    vector<int> PrevSmaller(vector<int>& arr, int n){
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top() != -1 && arr[st.top()] >=  arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> NextSmaller(vector<int>& arr, int n){
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
            while(st.top()!= -1 && arr[st.top()] >=  arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int maxarea(vector<int>& arr,int n){
        vector<int> prev(n);
        prev =  PrevSmaller(arr,n);
        vector<int> next(n);
        next = NextSmaller(arr,n);
        int ans = 0;
        for(int i=0;i<n;i++){
            int l = arr[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int w = next[i]- prev[i]-1;
            int mini = min(w,l);
            ans = max(ans,mini*mini);
        }
        return ans;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> arr(n,0);
        int ans = 0 ;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1'){
                    arr[j] = arr[j]+1;
                }else{
                    arr[j] = 0;
                }
            }
            ans = max(ans,maxarea(arr,n));
        }
        return ans;
    }
};
