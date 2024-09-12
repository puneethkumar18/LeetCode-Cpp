class Solution {
public:
    void solve(vector<int>& nums, map<int, int>& m) {
        set<int> st;
        for (auto i : nums) {
            st.insert(i);
        }
        for (auto i : st) {
            m[i]++;
        }
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        map<int, int> m;

        solve(nums1, m);
        solve(nums2, m);
        solve(nums3, m);
        vector<int> ans;
        for (auto i : m) {
            if (i.second > 1) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
