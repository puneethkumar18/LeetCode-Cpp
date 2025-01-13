class Solution {
public:
    int minimumLength(string s) {
        int arr[26] = {0};
        for(auto i:s){
            arr[i-'a']++;
        }
        int res = 0;
        for(auto i:arr){
            if(i!=0)
            if(i%2 == 0){
                res += 2;
            }else{
                res++;
            }
        }
        return res;
    }
};
