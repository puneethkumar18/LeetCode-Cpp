class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        // if( n ==1 && nums[0] == 0){
        //     return 2;
        // }
        int res = 0;
        vector<int> arr(n,0);
        arr[0] = nums[0];
        for(int i=1;i<n;i++){
            arr[i] = arr[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i] == 0 ){
                   if(arr[i] == arr[n-1]-arr[i]){
                        res += 2;
                   }else if( abs(arr[i] -(arr[n-1]-arr[i])) == 1){
                        res++;
                   }
            }
        }
        return res;
    }
};
