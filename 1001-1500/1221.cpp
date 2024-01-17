class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0;
        int countL = 0;
        int countOfSubstring = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R'){
                countR++;
            }else{
                countL++;
            }
            if(countR == countL){
                countOfSubstring++;
                countR = 0;
                countL = 0;
            }
        }
        return countOfSubstring;
    }
};
