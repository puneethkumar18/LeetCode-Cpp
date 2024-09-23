class Solution {
public:
    bool isVowel(char ch) {
        
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;

        int j = s.length() - 1;
        while (i < j) {
            if(!isVowel(s[i])){
                i++;
            }
            if(!isVowel(s[j])){
                j--;
            }
            if(isVowel(s[j]) && isVowel(s[i])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
