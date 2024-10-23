class Solution {
public:
    
    string getEncryptedString(string s, int k) {
        int len = s.length();
        string str = s;
        for(int i=0;i<len;i++){
            str[i] = s[(i+k)%len];
        }
        return str;
    }
};
