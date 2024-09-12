class Solution {
public:
    vector<int> diStringMatch(string s) {
        int size = s.length();
        int dCount = size;

        
        vector<int> ans;
        int iPointer = 0;
        for (auto i : s) {
            if (i == 'D') {
                ans.push_back(dCount);
                dCount--;
            } else {
                ans.push_back(iPointer);
                iPointer++;
            }
        }
        ans.push_back(iPointer);
        return ans;
    }
};
