class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int left = 0;
        int right = 0;
        for(auto i:m){
            left += i.second/2;
            right += i.second%2;
        }
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};
