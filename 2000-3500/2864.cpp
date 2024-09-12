class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        string ans = "";
        while(m['1'] != 1){
            ans.push_back('1');
            m['1']--;
        }
        while(m['0'] != 0){
            ans.push_back('0');
            m['0']--;
        }
        ans.push_back('1');
        return ans;
    }
};
