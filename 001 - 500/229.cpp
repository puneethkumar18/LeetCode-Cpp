class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> temp;
        int n = nums.size();
        int time = n/3;
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
            if(m[i] > time){
                temp.insert(i);
            }
        }
        for(auto i:temp){
            ans.push_back(i);
        }
        return ans;
    }
};
