class Solution {
public:
    int gcd(int e1,int e2){
        
        for(int i=e1;i>1;i--){
            if(e2%i == 0 && e1%i == 0){
                return i;
            }
        }
        return 1;
    }
    int findGCD(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int e1 = nums[0];
        int e2 = nums[size-1];
        return gcd(e1,e2);
    }
};
