class Solution {
public:
    bool checkEqual(vector<int> a, vector<int> b) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size()){
            return false;
        }
        vector<int> map(26, 0);

        for (int i = 0; i < s1.length(); i++) {
            int num = s1[i] - 'a';
            map[num]++;
        }

        int i = 0;
        int windowSize = s1.size();
        vector<int> map1(26, 0);
        while (i < windowSize) {
            int index = s2[i] - 'a';
            map1[index]++;
            i++;
        }
        if (checkEqual(map, map1)) {
            return true;
        }

        while (i < s2.size()) {
            int prevIndex = s2[i - windowSize] - 'a';
            map1[prevIndex]--;
            int index = s2[i] - 'a';
            map1[index]++;
            i++;
            if (checkEqual(map, map1)) {
                return true;
            }
        }
        return false;
    }
};
