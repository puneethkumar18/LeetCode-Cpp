class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum = 2 * arr[j];
                if(arr[i] == sum && i != j){
                    return true;
                }
            }
            
        }
        return false;
    }
};
