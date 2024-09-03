class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        int currX = points[0][0];
        int currY = points[0][1];
        for(int i=1;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            if(x > currX){
                x = x-currX;
                currX += x;
            }else{
                x = currX-x;
                currX -= x;
            }
             if(y > currY){
                y = y-currY;
                currY += y;
            }else{
                y = currY-y;
                currY -= y;
            }
            while( x != 0 && y != 0){
                ans++;
                x--;
                y--;
            }
            while(x!=0){
                ans++;
                x--;
            }
            while(y!=0){
                ans++;
                y--;
            }
        }
        return ans;
    }
};
