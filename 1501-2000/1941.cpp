class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> ma;

        for(auto i:s){
            ma[i]++;
        }
        int temp = ma[s[0]];
        for(auto i:ma){
            if(i.second != temp){
                return false;
            }
        }
        return true;
    }
};
