class Solution {
public:
    int getCount(string s,char ch,int n){
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i] == ch){
                cnt++;
            }
        }
        return cnt;
    }
    int maxScore(string s) {
        int n = s.length();
        int zeroCount = getCount(s,'0',n);
        int oneCount = getCount(s,'1',n);
        int left = 0;
        int right = oneCount;
        int res = 0;
        for(int i=0;i<n-1;i++){
            
            if(s[i] == '0'){
                zeroCount--;
                left++;
            }else{
                oneCount--;
                right--;
            }
            if(left+right > res){
                res = left+right;
            }
        }
        return res;
    }
};
