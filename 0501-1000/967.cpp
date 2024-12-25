class Solution {
public:

    void dfs(int num,int n,int k,vector<int>& res){
        if(n== 0){
            if(res.size() ==  0 || res[res.size()-1] != num){
                res.push_back(num);
            }
            return ;
        }
        int lastDigit = num%10;
        if(lastDigit + k <= 9)dfs(num*10+lastDigit+k,n-1,k,res);
        if(lastDigit - k >= 0)dfs(num*10+lastDigit-k,n-1,k,res);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;

        for(int num=1;num<=9;num++)
            dfs(num,n-1,k,res);
        return res;
    }
};
