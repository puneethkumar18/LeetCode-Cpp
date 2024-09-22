class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        priority_queue<int> pq;

        int i=0;
        int j = nums.size()-1;
        while(i < j){
            int sum = nums[i]+nums[j];
            pq.push(sum);
            i++;
            j--;
        }

        return pq.top();
    }
};
