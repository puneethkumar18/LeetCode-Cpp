class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int,bool> mp;
        unordered_map<int,bool> mp1;
        vector<int> res;
        for(int i=0;i<n;i++){
            mp[A[i]] = true;
            mp1[B[i]] = true;
            int temp  = 0;
            for(auto j:mp){
                if(mp1[j.first]){
                    temp++;
                }
            }
            res.push_back(temp);
        }

        vector<int> res(n),mp(n+1,0);
        int cnt = 0;
        for(int i=0;i<n;i++){
            mp[A[i]]++;
            if(mp[A[i]] == 2)cnt++;
             mp[B[i]]++;
            if(mp[B[i]] == 2)cnt++;
            res[i] = cnt;
        }
        return res;
    }
};
