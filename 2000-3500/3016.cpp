class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr(26,0);
        for(auto i:word){
            arr[i-'a']++;
        }

        sort(arr.begin(),arr.end(),greater<int>());
        int ans = 0;
        int push = 1;
        int key = 0;
        for(int i=0;i<26;i++){
            if(arr[i] == 0){
                break;
            }
            ans += arr[i]*push;
            key++;
            if(key% 8 == 0){
                push++;
            }
        }
        return ans;
    }
};
