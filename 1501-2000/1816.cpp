class Solution {
public:
    string truncateSentence(string s, int k) {
        string res;
        for(int i=0;i<s.length();++i){
           
            if(s.at(i)==' '){
                k--;
            }
            if(k == 0){
                break;
            }
             res += s.at(i);
        }
        return res;
    }
};
