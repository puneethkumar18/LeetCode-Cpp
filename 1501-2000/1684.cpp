class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,bool> m;
        for(int i=0;i<allowed.size();i++){
            m[allowed[i]] = true;
        }
        int ans = 0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(m[words[i][j]] == false )break;
                if(j == words[i].length()-1) ans++;
            }
            
        }
        return ans;
    }
};
