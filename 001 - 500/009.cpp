class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        stack<int> st;
        int temp = x;
        int  a = 0;
        while(temp != 0){
            cout<<a;
            int digit = temp%10;
            temp = temp/10;
            if(a > INT_MAX/10)
            return false;
            a*=10;
            a+=digit;
        }
        
        if(a != x){
            return false;
        }
        return true;
    }
};
