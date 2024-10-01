class Solution {
public:
    bool solve(vector<string>& strs,int y){
        for (int i=0;i<strs.size()-1;i++){
            if(strs[i][y] > strs[i+1][y]){
                return false;
            }
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int n = strs[0].size();
        for(int i=0;i<n;i++){
            if(solve(strs,i) == false){
                ans++;
            }
        }
        return ans;
    }
};
