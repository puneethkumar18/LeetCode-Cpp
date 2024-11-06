class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int maxi = 0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            if(citations[i] >= n-i){
                maxi = max(maxi,n-i);
            }
        }
        return maxi;
    }
};
