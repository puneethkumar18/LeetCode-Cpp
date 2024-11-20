class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);

        if(word1.size() != word2.size()){
            return false;
        }

        for(auto i:word1){
            arr1[i-'a']++;
        }
        for(auto i:word2){
            arr2[i-'a']++;
        }

        for(int i=0;i<26;i++){
            if(arr1[i]==0 && arr2[i]!=0 || arr2[i]==0 && arr1[i]!=0)return false;
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());

        for(int i=0;i<26;i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
            
        }
        return true;
    }
};
