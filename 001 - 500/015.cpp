class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(),nums.end());
        set<vector<int> > s;
        int size = nums.size();
        vector<vector<int> > output;
        for(int i = 0;i < size-2;i++){
            int j = i+1;
            int k = size-1;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
              
                if(sum == target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(sum < target){
                    j++;
                }else{
                    k--;
                }
                
            }
        }
        for(auto i : s){
            output.push_back(i);
        }
        
        return output;

    }
};
