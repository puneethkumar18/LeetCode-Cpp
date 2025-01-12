
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;
        int n = arr.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        for(auto i:mp){
            if(i.first == i.second && res < i.first)
            res = i.first;
        }
        return res;
    }
};
