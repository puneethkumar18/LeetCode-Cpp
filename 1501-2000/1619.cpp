class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        double m = (double)(n*5)/100;
        double sum = 0;
        double count = n-m*2;
        for(int i=(int)m;i<n-(int)m;i++){
            sum+=arr[i];
        }
        return sum/count;
    }
};
