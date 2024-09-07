class Solution {
public:
    int getNumChar(string s){
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        int count = 0;
        for(auto i:m){
            count++;
        }
        return count;
    }
    void solve(string s, int maxLetters, int minSize,map<string,int>& m){
        for(int i=0;i<=s.length()-minSize;i++){
            string temp = "";
            for(int j = i;j < i+minSize;j++){
                temp.push_back(s[j]);
            }
            if(getNumChar(temp) <= maxLetters){
                m[temp]++;
            }
        }
    }
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        map<string,int> m;
        
        
            solve(s,maxLetters,minSize,m);
        
        
        int maxi = 0;
        for(auto i:m){
            if(i.second > maxi){
                maxi = i.second;
            }
        }
        return maxi;
    }
};
