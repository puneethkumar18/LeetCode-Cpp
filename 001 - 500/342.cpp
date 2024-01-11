class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1){
            return false;
        }if(n==1){
            return true;
        }
        long long ans = 1;
        for(int i = 0;i<n;i++){
            ans*=4;
            if(ans > n){
                return false;
            } else if(ans==n){
                return true;
            }
        }
        return false;
    }
};
