class Solution {
public:
    int getDeciCount(int num){
        int count = 0;
        while(num > 0){
            if(num%2 != 0){
                count++;
            }
            num = num/2;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> m;
        for(int i=0;i<arr.size();i++){
            int temp = getDeciCount(arr[i]);
            m[temp].push_back(arr[i]);
        }

        vector<int> ans;
        for(auto i:m){
            sort(i.second.begin(),i.second.end());
            for(auto j:i.second){
                ans.push_back(j);
            }
        }
        return ans;
    }
};
