class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            bool isHave = true;
            for (int j = 0; j < pref.length(); j++) {
                if (words[i][j] != pref[j]) {
                    isHave = false;
                    break;
                }
            }
            if(isHave == true){
                ans++;
            }
        }
        return ans;
    }
};
