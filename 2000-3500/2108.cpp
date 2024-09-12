class Solution {
public:
    bool isPolidrome(string str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            bool res = isPolidrome(words[i]);
            if(res == true){
                return words[i];
            }
        }
        return "";
    }
};
