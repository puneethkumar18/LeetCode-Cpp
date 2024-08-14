class Solution {
public:
    int mySqrt(int x) {
        if(x == 1){
            return 1;
        }
        for(int i=0;i<=x/2;i++){
            int var = i*i;
            if(var == x){
                return i;
            }
            if(var > x){
                return i-1;
            }
        }
        return 0;
    }
};
