class Solution {
public:
    unordered_map<int,string>  ma;
    Solution(){
        ma[1] = "0";
    }
    string invert(string str){
        for(int i=0;i<str.length();i++){
            if(str[i] == '0'){
                str[i] = '1';
            }else{
                str[i] = '0';
            }
        }
        return str;
    }  

    void solve(int num,int temp){
        if(temp > num){
            return ;
        }
        string inver = invert(ma[temp-1]);
        reverse(inver.begin(),inver.end());
        string str = ma[temp-1] + '1' + inver;
        ma[temp] = str;
        solve(num , temp+1);
    } 
    char findKthBit(int n, int k) {
        if(n <= 1){
            return '0';
        }
        solve(n,2);
       
        return ma[n][k-1];
    }
};
