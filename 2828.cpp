class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string text = "";
        for(int i=0;i<words.size();i++){
            text.push_back(words[i][0]);
        }
        if(s == text){
            return true;
        }
        return false;
    }

};
