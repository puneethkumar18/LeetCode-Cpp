class Solution {
public:
    bool solve(string a,string b){
        for(int i=0;i<b.length();i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(int i=0;i<words.size();i++){
            if(solve(s,words[i])){
                count++;
            }
        }
        return count;
    }
};
