class Solution {
public:
    
    string stringHash(string s, int k) {
        vector<string> arr;
        int n = s.length();
        string temp = "";
        for(int i=0;i<n;i++){
            if(temp.length() == k){
                arr.push_back(temp);
                temp = "";
            }
            temp += s[i];
        }
        arr.push_back(temp);
        string ans = "";
        for(auto i:arr){
            int sum = 0;
            for(auto j:i){
                sum += j-'a';
            }
            
            ans += ('a'+(sum%26));
            
        }
        return ans;
    }
};
