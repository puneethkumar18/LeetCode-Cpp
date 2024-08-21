class Solution {
public:
    bool solve(int n,int x){
        if(x > 30){
            return false;
        }
        int temp = pow(2,x);
        
        if(temp > n){
            return false;
        }else if(temp == n){
            return true;
        }
        bool res = solve(n,x+1);
        return res;
    }
    bool isPowerOfTwo(int n) {
        
        return solve(n,0);
    }

};
