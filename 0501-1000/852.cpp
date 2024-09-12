class Solution {
public:

    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        int mid ;
        while(i <= j){
            mid = (i+j)/2;
            if((mid-1 >= 0 && arr[mid] > arr[mid-1]) && (mid+1 > j || arr[mid] > arr[mid+1])){
                break;
            }else if(arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1]){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return mid;
    }
};
