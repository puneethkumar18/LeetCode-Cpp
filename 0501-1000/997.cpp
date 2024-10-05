class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n < 2){
            return n;
        }
        unordered_map<int,int> m;
        unordered_map<int,bool> m1;
        for(auto i:trust){
            m1[i[0]] = true;
            m[i[1]]++;
        }
        int ans;
        for(auto i:m){
            if(i.second == n-1){
                ans = i.first;
                break;
            }
        }
        
        if(ans != 0 &&m1[ans] == false){
            return ans;
        }
        return -1;
    }
};
