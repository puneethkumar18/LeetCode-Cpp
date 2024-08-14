class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1 || num == 0){
            return true;
        }
        for(int i=0;i<=num/2;i++){
            if(i == 46341 || (i*i) > num){
                break;
            }
            if((i*i) == num){
                return true;
            }
            
        }
        return false;
    }
};
