class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> arr(n,0);
        for(int i=0;i<roads.size();i++){
            arr[roads[i][0]]++;
            arr[roads[i][1]]++;
        }
        sort(arr.begin(),arr.end());

        long long ans = 0;

        for(int i=0;i<n;i++){
            ans += (long long)arr[i]*(i+1); 
        }
        return ans;
    }
};
