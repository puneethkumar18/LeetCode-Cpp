class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int size = arr.size();
        unordered_map<string,int> um; 
        for(int i=0;i<size;i++){
            um[arr[i]]++;
        }  
        string ans = "";
        
        for(auto i:arr){
            if(um[i] == 1){
                k--;
                if(k==0){
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};
