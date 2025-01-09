class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        for(auto i:candyType){
            mp[i]++;
        }
        if(mp.size() >= candyType.size()/2){
            return candyType.size()/2;
        }
        return mp.size();
    }
};
