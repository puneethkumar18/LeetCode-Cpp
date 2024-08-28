class Solution {
public:
    int longestPalindrome(string s) {

        sort(s.begin(),s.end());

        int ans = 0;
        int i = 0;
        while(i<s.size()){
            if(s[i] == s[i+1]){
                ans += 2;
                i++;
            }else if (ans%2 ==  0){
                ans++;
            }
            i++;
        }
        return ans;
        // map<char,int> m;
        // for(auto i:s){
        //     m[i]++;
        // }
        // int ans = 0;
        // bool hasOdd = false;
        // for(auto i:m){
        //     cout<<i.first;
        //     if(i.second != 1){
        //         int temp = i.second%2;
        //         if(ans == 0 && i.first == s[0]) temp = 0;
        //         ans += i.second - temp;
        //     }else{
        //         hasOdd = true;
        //     }
        // }
        // if(hasOdd){
        //     return ans+1;
        // }
        // return ans;
    }
};
