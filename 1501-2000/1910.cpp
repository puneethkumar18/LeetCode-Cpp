class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length()){
            int partIndex = s.find(part);
            
            s.erase(partIndex,part.length());
        }
        return s;
    }
};
