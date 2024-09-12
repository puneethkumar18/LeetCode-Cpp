class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        vector<int> temp;
        for(char ch:s){
            int n = ch-'0';
            temp.push_back(n);
        }
        sort(temp.begin(),temp.end());
        int ans = abs((temp[0]*10+temp[3]) + (temp[1]*10+temp[2]));
        return ans;
    }
};
