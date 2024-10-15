class Solution {
public: 
    
    long long minimumSteps(string s) {
        long long ans  = 0;
        int j  = s.length()-1;
        int i=0;

        while(i < j){
            if(s[i] == '1' && s[j] == '0'){
                ans += j-i;
                i++;
                j--;
            }else if(s[i] == '0'){
                i++;
            }else{
                j--;
            }
        }
        
        return ans;
    }
};
