class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        vector<int> ans(2 ,0);
        while(i < j){
            int sum  = numbers[i]+numbers[j];
            if(sum  == target){
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }else if (sum > target){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
