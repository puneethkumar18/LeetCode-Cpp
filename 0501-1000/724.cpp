class Solution {
public:
    bool solve(vector<int>& nums,int index){
        int leftSum = 0;
        int rightSum = 0;

        for(int i=0;i<index;i++){
            leftSum += nums[i];
        }

        for(int i=index+1;i<nums.size();i++){
            rightSum += nums[i];
        }
        cout<<leftSum<<" "<<rightSum<<endl;
        if(leftSum == rightSum){
            return true;
        }
        return false;
    }
    int pivotIndex(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            bool res = solve(nums,i);
            if(res  == true){
                return i;
            }
        }
        return -1;
    }
};
