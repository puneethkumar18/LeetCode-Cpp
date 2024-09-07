class Solution {
public:
    void merge(vector<int>& nums, int s, int e) { 
        int mid = (s + e) / 2;

        int len1 = mid-s+1;
        int len2 = e -mid;

        int* left = new int [len1];
        int * right = new int[len2];

        int mainArrayIndex = s;
        for(int i=0;i<len1;i++){
            left[i] = nums[mainArrayIndex++];
        }
        mainArrayIndex = mid+1;
        for(int i=0;i<len2;i++){
            right[i] = nums[mainArrayIndex++];
        }

        int i=0;
        int j=0;
        mainArrayIndex = s;

        while(i<len1 && j<len2){
            if(left[i] < right[j]){
                nums[mainArrayIndex++] = left[i++];
            }else{
                nums[mainArrayIndex++] = right[j++];
            }
        }

        while(i < len1){
            nums[mainArrayIndex++] = left[i++];
        }

        while(j <len2){
            nums[mainArrayIndex++] = right[j++];
        }
     }
    void mergesort(vector<int>& nums, int s, int e) {
        if (s >= e) {
            return;
        }
        int mid = (s + e) / 2;
        mergesort(nums, s, mid);
        mergesort(nums, mid + 1, e);

        merge(nums, s, e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
