class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        map<int,int> losers;
        for(auto i:matches){
            losers[i[1]]++;
        }

        for(auto i:losers){
            if(i.second == 1){
                ans[1].push_back(i.first);
            }
        }
        for(auto i:matches){
            int temp = i[0];
            if(losers[temp] == 0){
                ans[0].push_back(temp);
                losers[temp] = -1; 
            }
        }
        sort(ans[0].begin(),ans[0].end());
        return ans;
    }
};
