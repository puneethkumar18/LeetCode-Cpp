class Solution {
public:
    bool solve(string str1,string str2){
        int i=0;
        int j = str1.size()-1;
        while(j != -1){
            if(str1[i] != str2[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(solve(words[i],words[j]) == true){
                    ans++;
                }
            }
        }
        return ans;
    }
};
