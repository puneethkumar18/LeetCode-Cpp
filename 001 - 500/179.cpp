class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for(auto i:nums){
            temp.push_back(to_string(i));
        }
        sort(temp.begin(),temp.end(),[](string a,string b){
            return (b+a) < (a+b); 
        });

        if(temp[0] == "0"){
            return "0";
        }

        string ans = "";
        for(auto i:temp){
            ans += i;
        }
        return ans;
    }
};
