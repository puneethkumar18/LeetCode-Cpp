class Solution {
public:
    void sum(vector<int>& arr,int index ){
        int num = arr[index];
        int sum = 0;
        while(num != 0){
            int temp = num%10;
            num /= 10;
            sum += temp;
        }
        arr[index] = sum;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            sum(nums,i);
        }
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
