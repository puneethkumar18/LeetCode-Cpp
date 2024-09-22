class comp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;

        for(auto i:nums){
            m[i]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;

        for(auto i:m){
            pq.push({i.first,i.second});
        }

        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }

};
