class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(batteryPercentages[i] > 0){
                ans++;
                for(int j=i+1;j<n;j++){
                    if(batteryPercentages[j]-1 >= 0){
                        batteryPercentages[j]--;
                    }
                }
            }
        }
        return ans;
    }
};
