class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        while(tickets[k] != 0){
            for(int i=0;i<tickets.size();i++){
              if(tickets[i] > 0){
                  tickets[i]--;
                  ans++;
                  if(tickets[k] == 0){
                    break;
                  }
              }
            }
        }
        return ans;
    }
};
