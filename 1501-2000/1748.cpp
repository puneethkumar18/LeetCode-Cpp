class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        int ans = 0;
        for(auto i:m){
            if(i.second == 1){
                ans+=i.first;
            }
        }
        return ans;
    }
};
