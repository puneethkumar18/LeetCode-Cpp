class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        char ch = 'a';
        for(int i=0;i<word.length();i++){
            if(ch  == word[i]){
                ans++;
                continue;
            }
            int forword = abs(ch-word[i]);
            int backword = abs(forword-26);
            if(forword < backword){
                
                ans += forword+1;
            }else{
                
                ans += backword+1;
            }
            ch = word[i];
            
        }
        return ans;
    }
};
