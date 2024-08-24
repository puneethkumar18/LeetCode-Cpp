class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        map<int,vector<int>> mp;
        for(auto i:m){
            mp[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(auto it:mp){
            sort(it.second.rbegin(),it.second.rend());
            for(int i=0;i<it.second.size();i++){
                for(int j=0;j<it.first;j++){
                    ans.push_back(it.second[i]);
                }
            }
        }
        return ans;

    }
};
