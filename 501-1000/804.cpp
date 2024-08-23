class Solution {
public:
    vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string converter(string str){
        string res ="";
        for(auto i:str){
            res += table[i-'a'];
        }
        return res;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> m;
        for(auto i:words){
            string temp = converter(i);
            m[temp]++;
        }
        
        return m.size();
    }
};
