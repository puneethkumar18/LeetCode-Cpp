class Solution {
public:
    int ceil(int num){
        double temp = (double)num/3;
        int t = num/3;
        if((double) t < temp){
            return t+1;
        }
        return t;
;    }
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }

        for(int i=0;i<k;i++){
            int front = pq.top();
            pq.pop();
            score += front;
            
            pq.push(ceil(front));
        }
        return score;
    }
};
