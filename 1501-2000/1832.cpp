class Solution {
public:
    bool checkIfPangram(string sentence) {
       
       set<char> ch;
       for(auto i:sentence){
        ch.insert(i);
       }
       if(ch.size() < 26){
        return false;
       }
       return true;
    }
};
