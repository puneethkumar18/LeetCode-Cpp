class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(auto i:arr1){
            m[i]++;
        }
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<m[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
            m[arr2[i]] = 0;
        }

        for(auto i:m){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
