class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        if(k == mp.size()){
            return true;
        }
        int oddCount = 0;
        for(auto i:mp){
            if(i.second&1){
                oddCount++;
            }
        }

        return (oddCount <= k && k<= s.size())  ;
    }
};
