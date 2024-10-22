class Solution {
public:
    bool valid(string str) {
        cout<<str<<endl;
        int i = 0;
        int j = str.length() - 1;
        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        string temp = s;
        while (i < j) {
            if (s[i] != s[j]) {
                bool right = valid(s.erase(j, 1));
                s=temp;
                bool left = valid(s.erase(i, 1));
                if (right || left) {
                    return true;
                } else {
                    return false;
                }
            }
            i++;
            j--;
        }
        return true;
    }
};
