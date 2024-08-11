class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();

        int ans = 0;
        int buy = prices[0];
        for (int i = 1; i < size; i++) {
            int val = prices[i] - buy;
            if (val > ans) {
                ans = val;
            }else if(prices[i] < buy){
                buy = prices[i];
            }
        }
            return ans;
        }
    };
