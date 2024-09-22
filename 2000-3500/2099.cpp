class comp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    }

};

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }

        for(int i=k;i<nums.size();i++){
            if(nums[i] > pq.top().first){
                pq.pop();
                pq.push({nums[i],i});
            }
        }

        vector<pair<int,int>> arr;
        while(!pq.empty()){
            arr.push_back(pq.top());
            pq.pop();
        }
        sort(arr.begin(),arr.end(),comp());

        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
