class Solution {
public:
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int ,bool> m1;
       unordered_map<int,bool> m2;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]] = true;
        }
        for(auto i:nums2){
            m2[i] = true;
        }
        vector<vector<int>> ans(2);
        set<int> a1;
        set<int> a2;

        for(auto i:nums1){
            if(m2[i] == false){
                a1.insert(i);
            }
        }
        for(auto i:nums2){
            if(m1[i] == false){
                a2.insert(i);
            }
        }

        for(auto i:a1){
            ans[0].push_back(i);
        }
        for(auto j:a2){
             ans[1].push_back(j);
        }
        

        return ans;
    }
};
