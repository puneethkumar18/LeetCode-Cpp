class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> correctOrder = heights;
        sort(heights.begin(),heights.end());
        int ans = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != correctOrder[i]){
                ans++;
            }
        }
        return ans;
    }
};
