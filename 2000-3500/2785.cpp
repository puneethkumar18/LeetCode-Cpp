class Solution {
public:
    string sortVowels(string s) {
        vector<char> arr;
        for (auto i : s) {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
                arr.push_back(i);
            }
        }
        if(arr.size() == 0){
            return s;
        }
        sort(arr.begin(), arr.end(), [](char a, char b) { return a < b; });
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                    s[i] = arr[j];
                    j++;
                }
        }
        return s;
    }
};
