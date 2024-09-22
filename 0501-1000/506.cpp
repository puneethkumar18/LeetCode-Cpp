class Solution {
public: 
    int index(vector<int>& score,int num)
    {   
        int cnt = 0;
        for(auto i:score){
            if(i == num){
                break;
            }
            cnt++;
        }
        return cnt;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
       priority_queue<int> pq;
       for(auto i:score){
        pq.push(i);
       }

       vector<string> ans(score.size());
       int count = 1;
        while( !pq.empty()){
            int indi = index(score,pq.top());
            pq.pop();
            if(count == 1){
                ans[indi] = "Gold Medal";
            }else if(count == 2){
                ans[indi] = "Silver Medal";
            }else if(count == 3){
                ans[indi] = "Bronze Medal";
            }else{
                ans[indi] = to_string(count);
            }
            count++;
        }
        return ans;
    }
};
