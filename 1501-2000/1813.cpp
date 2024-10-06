class Solution {
public:
    vector<string> solve(string s){
        vector<string> words;
        string word = "";
        for(auto i:s){
            if(i == ' '){
                words.push_back(word);
                word = "";
            }else{
                word += i;
            }
        }
        if(word.length() != 0)words.push_back(word);
        return words;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> words1 = solve(sentence1);
        vector<string> words2 = solve(sentence2);

        if(words1.size() < words2.size())swap(words1,words2);

        int n1 = words1.size();
        int n2 = words2.size();

        int start = 0;
        int end = 0;

        while(start < n2 && words2[start] == words1[start] ){
            start++;
        }
        while(end < n2 && words2[n2 - end -1] == words1[n1 - end - 1] ){
            end++;
        }
        return start+end >= n2;
    }
};
