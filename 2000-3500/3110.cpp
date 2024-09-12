class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<s.length()-1;i++){
            int ascii = int(s[i]);
            int next = int(s[i+1]);
            sum += abs(ascii-next);
        }
        return sum;
    }
};
