// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n  == 1){
            return 1;
        }
       int i = 1;
       int j = n;
       int ans = 1;
       while(i <= j){
        int mid  = i+(j-i)/2;
        bool state = isBadVersion(mid);
        if(state){
            ans = mid;
            j = mid-1;
        }else{
            i = mid+1;
        }
       }
       return ans;
    }
};
