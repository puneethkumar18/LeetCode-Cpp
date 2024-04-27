class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int size = prices.size();
        vector<int> ans(size);
        for (int i = 0; i < size; i++) {
            ans[i] = prices[i];
            for (int j = i+1; j < size; j++) {
                if (prices[i] >= prices[j]) {
                    ans[i] = ans[i]-prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};
