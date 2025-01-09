class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        map<int,int> mp;
        for(auto i:nums1){
            mp[i[0]] += i[1];
        }
        for(auto i:nums2){
            mp[i[0]] += i[1];
        }
        for(auto i:mp){
            res.push_back({i.first,i.second});
        }
        return res;
    }
};
