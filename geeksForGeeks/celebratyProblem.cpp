class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        
        int n = mat.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size() > 1 && n != 0){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            
            if(mat[x][y] == 1){
               st.push(y);
            }
            else{
                st.push(x);
            }
            n--;
            
        }
        int c = st.top();
        n = mat.size();
        int zeroCount = 0;
        for(int i=0;i<n;i++){
            if(mat[c][i] == 0){
                zeroCount++;
            }
        }
        int colCount = 0;
        for(int i=0;i<n;i++){
            if(mat[i][c] == 1){
                colCount++;
            }
        }
    
        if(colCount == n-1 && zeroCount == n){
            
            return c;
        }
        return -1;
    }
};
