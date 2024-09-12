class Solution {
public:
    
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> count;

        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            count[nums[i]] = count[nums[i]]+1;
            if(count[nums[i]] > maxi){
                maxi = count[nums[i]];
            }
        }
        int res = 0;
        
        for(auto i:count){
            if(i.second == maxi){
                res = res+i.second;
            }
        }
        return res;
    }
};
