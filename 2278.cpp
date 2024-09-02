class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int len = s.length();
        for( auto i:s){
            if(i == letter)
             count++;
        }
        
        int ans = (count*100)/len;
        
        return ans;
    }
};
