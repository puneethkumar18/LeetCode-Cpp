class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        for(int i=1;i<=n;i++){
            
            n  = n - i;
            
            if(n  == 0 || n < i){
                return cnt+1;
            }
            cnt++;
        }
        return cnt;
    }
};
