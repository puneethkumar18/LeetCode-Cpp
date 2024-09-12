class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int> m;
        for(auto i:nums){
            m[i] = m[i]+1;
            if(m[i] == n){
                return i;
            }
        }
        return -1;
    }
};
