class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:nums){
            pq.push(i);
        }
        int count = 0;
        int num = 0;

        while(!pq.empty()){
            int temp  = pq.top() - num;
            if(temp != 0){
                num = temp + num;
                count++;
            }else{
                pq.pop();
            }
        }
        return count;   
    }
};
