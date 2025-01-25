class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int res = 0;
        int temp = capacity;
        for(int i=0;i<n;i++){
            if(temp < plants[i]){
                temp = capacity;
                res += (i+i); 
            }
            res++;
            temp -= plants[i];
            
        }
        return res;
    }
};
