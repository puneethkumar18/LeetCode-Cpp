class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int i=0;
        int j = piles.size()-1;
        int ans = 0;
        while(i<=j){
            
            i++;
            ans += piles[i];
            i++;
            j--;
            
        }
        return ans;
    }
};
