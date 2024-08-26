class Solution {
public:
    string sortSentence(string s) {
        string temp = "";
        s.push_back(' ');
        map<char,string> m;
        for(auto i:s){
            if(i == ' '){
                char ch = temp[temp.size()-1];
                temp[temp.size()-1] = ' ';
                m[ch] = temp;
                temp = "";
            }else{
                temp.push_back(i);
            }
        }
        temp = "";
        for(auto i:m){
            temp += i.second;
            
        }
        temp.pop_back();
        return temp;
    }
};
