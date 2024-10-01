class Solution {
public:
    void solve(unordered_set<int>& st,int start,int end){
        for(int i=start;i<=end;i++){
            st.insert(i);
        }
    }
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            solve(st,nums[i][0],nums[i][1]);
        }
        
        return st.size();
    }
};
