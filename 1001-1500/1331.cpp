class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp(arr);
        sort(temp.begin(),temp.end());
        unordered_map<int,int> ma;
        int rank = 1;
        for(auto i:temp){
            if(ma[i] == 0){
                ma[i] = rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = ma[arr[i]];
        }
        return arr;
    }
};
