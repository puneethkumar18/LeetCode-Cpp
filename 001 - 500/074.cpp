class Solution {
public:
    bool solve(vector<int> arr,int target){
        int i = 0;
        int j = arr.size()-1;
        int mid = (i+j)/2;
        while(i <= j){
            if(arr[mid] == target){
                return true;
            }else if(arr[mid] > target){
                j = mid-1;
            }else{
                i = mid+1;
            }
            mid = (i+j)/2;
        }   
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i:matrix){
            if(solve(i,target)){
                return true;
            }
        }
        return false;
    }
};
