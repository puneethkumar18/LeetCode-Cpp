#include<queue>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans;
        priority_queue<int> qp;
        for(int i=0;i<nums.size();i++){  
                qp.push(nums[i]);
        }
        ans = qp.top()-1;
        qp.pop();
        ans = ans*(qp.top()-1);
        return ans;
    }
};
