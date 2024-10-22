class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        string temp = "";
        int count = 0;
        unordered_map<string,int> ma1;
        unordered_map<string,int> ma2;
        for(auto i:words1){
            ma1[i]++;
        }
        for(auto i:words2){
            ma2[i]++;
        }
        for(auto i:ma1){
            if(i.second == 1 && ma2[i.first] == 1){
                count++;
            }
        }
        return count;
    }
};
