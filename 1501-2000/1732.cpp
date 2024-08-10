class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(gain[0]);
        for(int i=1;i<gain.size();i++){
            int val = ans[i]+gain[i];
            ans.push_back(val);
        }
        sort(ans.rbegin(),ans.rend());
        return ans[0];
    }
};
