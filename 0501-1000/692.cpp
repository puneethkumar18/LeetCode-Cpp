class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> ma;
        for(auto i:words){
            ma[i]++;
        }
        vector<string> ans;
        vector<pair<string,int>> arr;
        for(auto i:ma){
            arr.push_back({i.first,i.second});
        }
        sort(arr.begin(),arr.end(),[](pair<string,int> a,pair<string,int> b){
            if(a.second == b.second){
                return a.first  <  b.first;
            }
            return a.second >  b.second;
        });
        for(int i=0;i<arr.size();i++){
           if(k){
            ans.push_back(arr[i].first);
            k--;
           }
        }
        return ans;
    }
};
