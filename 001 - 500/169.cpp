class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        int ans = 0;
        int maxi = 0;
        for(auto i:m){
            if(i.second > maxi){
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};
