class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int> count;
        int maxi = 0;
        for(int i=0;i<rectangles.size();i++){
            int mini = min(rectangles[i][0],rectangles[i][1]);
            if(mini > maxi){
                maxi = mini;
            }
            count[mini]++;
        }
        
        return count[maxi];
    }
};
