class Solution {
public:
    pair<int,int> getSums(vector<int> arr){
        int eSum = 0;
        int dSum = 0;
        for(int i=0;i<arr.size();i++){
            eSum += arr[i];
            int temp = arr[i];
            while(temp != 0){
                int digit = temp%10;
                temp = temp/10;
                dSum += digit;
            }
            
        }
        pair<int,int> p = make_pair(eSum,dSum);
        return p;
    }
    
    int differenceOfSum(vector<int>& nums) {
        pair<int,int> temp = getSums(nums);
        return abs(temp.first-temp.second);
    }
};
