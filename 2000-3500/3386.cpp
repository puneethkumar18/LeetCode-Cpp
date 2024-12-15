class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int res = events[0][0];
        int dist  = events[0][1];
        for(int i=1;i<events.size();i++){
            int diff = events[i][1]-events[i-1][1];
            if(diff == dist ) res = min(events[i][0],res);
            else if(diff > dist){
                dist = diff;
                res = events[i][0];
            }
        }
        return res;
    }
};
