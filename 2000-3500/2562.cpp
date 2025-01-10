class Solution {
public:
    
    long long findTheArrayConcVal(vector<int>& nums) {
        int i =0;
        int j = nums.size()-1;

        long long res = 0;
        while(i < j){
            int first = nums[i];
            int last = nums[j];
            while(last != 0){
                first *= 10;
                last /=10;
            }
            first += nums[j];
            i++;
            j--;
            res += (long long)first;
        }
        if(i == j){
            res += (long long)nums[i];
        }
        return res;
    }
};
