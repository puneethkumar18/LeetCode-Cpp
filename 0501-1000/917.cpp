class Solution {
public:
    
    string reverseOnlyLetters(string s) {
        int fPtr = 0, sPtr = s.size() - 1;
        while (fPtr < sPtr) {
            if (!(isalpha(s[fPtr]))) {
                fPtr++;
                continue;
            }
            if (!(isalpha(s[sPtr]))) {
                sPtr--;
                continue;
            }

            swap(s[fPtr], s[sPtr]);
            fPtr++;
            sPtr--;
        }
        return s;
    }
};
