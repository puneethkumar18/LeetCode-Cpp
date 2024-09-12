class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        vector<int> eve;
        vector<int> odd;

        for(auto i:nums){
            if(i%2 == 0){
                eve.push_back(i);
            }else{
                odd.push_back(i);
            }
        }
        for(auto i:odd)
        {
            eve.push_back(i);
        }
        return eve;
    }
};
