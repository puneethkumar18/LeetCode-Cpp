class Solution {
public:
    void reverse(string &s){
        int i=0;
        int j=s.length()-1;
        string ans;
        while( i < j ){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string finalString(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'i')
            {
                reverse(ans);
            }
            else{
                ans = ans+s[i];
            }
        }
        return ans;
    }
};
