class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int mid = n / 2;
        int i;
        for (i = 0 - mid; i <= mid; i++) {
            if ( i == 0) {
                if(n&1){
                    ans.push_back(i);
                }else{
                    continue;
                }
            }else{
                 ans.push_back(i);
            }
           
        }

        return ans;
    }
};
