class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appleSum = 0;
        for(auto i:apple){
            appleSum += i;
        }
        int count = 0;
        sort(capacity.rbegin(),capacity.rend());
        for(auto i:capacity){
            appleSum -= i;
            count++;
            if(appleSum <= 0){
                break;
            }
        }
        return count;
    }
};
