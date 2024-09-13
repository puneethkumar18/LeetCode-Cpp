class Solution {
public:
    
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        for(int i=1;i<arr.size();i++){
            arr[i] ^= arr[i-1];
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<queries.size();i++){
            int s = queries[i][0];
            int e = queries[i][1];

            int res = s > 0 ? arr[e]^arr[s-1]:arr[e];

            ans.push_back(res);
        }
        return ans;
    }
};
