class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans = "";
        char initial = 'a';

        unordered_map<char, char> m;
        map<char,bool> done;
        for (char i : key) {
            if (i != ' ' && !done[i]) {
                done[i] = true;
                m[i] = initial;
                
                initial++;
            }
        }

        for (auto i : message) {
            if (i != ' ') {
                ans = ans + m[i];
            }else{
                ans = ans + ' ';
            }
        }

        return ans;
    }
};
