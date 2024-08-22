class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int size = points.size();
        int maxi = INT_MIN;
        for(int i=0;i<size-1;i++){
            maxi = max(maxi,points[i+1][0]-points[i][0]);
        }
        return maxi;
    }
};
