class Solution {
public:
    void reverse(int i,int j,string& str){
        while(i<j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int k;
        s.push_back(' ');
        for(k=0;k<s.length();k++){
            if(s[k] == ' ' ){
                
                reverse(i,j,s);
                i = k+1;
            }
            j++;
        }
        
        return s.substr(1);
    }
};
