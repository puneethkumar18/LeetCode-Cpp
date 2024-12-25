class Solution {
public:
    bool isPolindrome(string str){
        int i =0,j =str.length()-1;

        while(i < j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int res = 0;
        for(int i=0;i<n;i++){
            string temp = "";
            for(int j=i;j<n;j++){
                temp += s[j];
                if(isPolindrome(temp)){
                    res++;
                }
            }
        }
        return res;
    }
};
