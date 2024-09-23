class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        string temp = "";
        for(auto i:s){
            int index = temp.find(i);
            if(index != -1){
                temp.erase(0,index+1);
            }
            temp += i;
            
            if(temp.length() > ans){
                ans = temp.length();
            }
        }
        return ans;
    }
};
