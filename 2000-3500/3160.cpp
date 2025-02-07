class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> colorMap;
        unordered_map<int,int> ballMap;
        int n = queries.size(); 
        vector<int> res;
        for(int i=0;i<n;i++){
            int ball = queries[i][0];
            int color = queries[i][1];
            if(ballMap[ball] != 0 ){
                int prevColor = ballMap[ball];
                colorMap[prevColor]--;
                if(colorMap[prevColor] == 0)colorMap.erase(prevColor);
                
            }
            ballMap[ball] = color;
            colorMap[color]++;

            res.push_back(colorMap.size());
        }

        return res;
    }
};
