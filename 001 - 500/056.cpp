class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),[](vector<int> a,vector<int> b){
            return a[0] < b[0];
        });
        int i = 1;
        int j = intervals[0][0];
        int k = intervals[0][1];
        while(i < intervals.size()){
            if(intervals[i][0] > k){
                ans.push_back({j,k});
                j = intervals[i][0];
            }
            if(k < intervals[i][1])k = intervals[i][1];
            i++;
        }
        ans.push_back({j,k});
        return ans;
    }
};
