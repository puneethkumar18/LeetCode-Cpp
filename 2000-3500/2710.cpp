class Solution {
public:
    string removeTrailingZeros(string num) {
        int size = num.length()-1;

        for(int i=size;i>=0;i--){
            if(num[i] == '0'){
                num.pop_back();
            }else{
                break;
            }
        }
        return num;
    }
};
