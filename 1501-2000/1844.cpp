class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.length()-1;i = i+2){
            char ch = s[i];
            char numInChar = s[i+1];
            int num = numInChar - '0';
            s[i+1] = ch+num;
        }
        return s;
    }
};
