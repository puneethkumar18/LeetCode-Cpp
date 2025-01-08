class Solution {
public:
    bool solve(string s1, string s2){
        

        int n = s1.size();
        int m = s2.size();
        if(n > m){
            return false;
        }
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i])
            {
                return false;
            }
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());

        for(int i=0;i<n;i++){
            if(s1[i] != s2[i])
            {
                return false;
            }
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        if(n <= 1){
            return 0;
        }
        int res = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(solve(words[i],words[j])){
                    res++;
                }
            }
        }
        return res;
    }
};
