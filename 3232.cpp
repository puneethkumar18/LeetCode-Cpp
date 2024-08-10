class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigit = 0;
        int doubleDigit = 0;
        for(auto i:nums){
            if(i > 9){
                doubleDigit += i;
            }else{
                singleDigit += i;
            }
        }
        if(singleDigit != doubleDigit){
            return true;
        }
        return false;
    }
};
