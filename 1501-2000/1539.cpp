class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans = 0;
        int j = 0;
        for(int i=1;i<arr[arr.size()-1];i++){
            
            if(i == arr[j]){
                j++;
            }else{
                ans++;
            }
        
            if(ans == k){
                return i;
            }
        }
        return arr[arr.size()-1]+k;
    }
};
