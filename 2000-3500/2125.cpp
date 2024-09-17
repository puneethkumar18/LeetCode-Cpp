class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        vector<int> count(n);
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<m;j++){
                if(bank[i][j] == '1'){
                    cnt++;
                }
            }
            count[i] = cnt;
        }
        int ans = 0;
        int prev = 0;
        int curr = 0;

        for(int i=0;i<n;i++){
            if(count[i] != 0){
                prev = curr;
                curr = count[i];
                cout<<curr<<" "<<prev<<endl;;
                if(prev != 0  && curr != 0){
                    ans += curr*prev;
                }
            }
        }
        return ans;
    }
};
