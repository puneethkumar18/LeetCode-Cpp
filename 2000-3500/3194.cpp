class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int minElement = nums[i];
            int maxElement = nums[j];
            i++;
            j--;
            double avg = double((minElement+maxElement))/2;
            ans.push_back(avg);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};
