class Solution {
public:
    string removeOuterParentheses(string s) {
        string res ;
        int opt = 0;
        for(char i:s){
            if(i == '(' && opt++ > 0) 
            res += i;
            if(i == ')' && opt-- > 1)
            res += i;
        }
        return res;
    }
}
;
