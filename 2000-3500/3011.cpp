class Solution {
public:
    int count(int num){
        int cnt = 0;
        while(num != 0){
            if(num&1){
                cnt++;
            }
            num = num >> 1;
        }
        return cnt;
    }
    bool check(vector<int>& nums){
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool canSortArray(vector<int>& nums) {
        int ans = 0;
        vector<int> arr(nums.size());
        int n = nums.size();

        for(int i=0;i<n;i++){

            arr[i] = count(nums[i]);
            cout<<arr[i]<<endl;
        }
        while(ans < n){
            for(int i=0;i<n-1;i++){
                if(arr[i] == arr[i+1] && nums[i] > nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
            if(check(nums)){
                    return true;
                }
                ans++;
        }
        return false;
    }
};
