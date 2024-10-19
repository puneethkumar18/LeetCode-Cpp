class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> ma;

        for(auto i:arr){
            ma[i]++;
        }
        priority_queue<int> pq;
        for(auto i:ma){
            pq.push(i.second);
        }
        int ans = 0;
        int temp = 0;
        while(!pq.empty()){
            if(n-temp <= n/2){
                break;
            }
            temp += pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};
