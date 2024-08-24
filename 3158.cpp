class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int> twiceList;
        for(auto i:m){
            if(i.second == 2){
                twiceList.push_back(i.first);
            }
        }
        int ans = 0;
        for(int i=0;i<twiceList.size();i++){
            ans = ans^twiceList[i];
        }
        return ans;
    }
};
