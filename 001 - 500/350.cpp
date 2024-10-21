class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ma;
        for(auto i:nums1){
            ma[i]++;
        }
        vector<int> ans;
        for(auto i:nums2){
            if(ma[i] > 0){
                ma[i]--;
                ans.push_back(i);
            }
        }
        return ans;
    }
};
