class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> ma;
        for(auto i:s){
            ma[i] = ma[i]+1;
            if(ma[i] == 2){
                return i;
            }
        }
        return 'a';
    }

};
