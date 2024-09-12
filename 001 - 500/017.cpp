class Solution {
public:
    void solve(string digits, string output, vector<string>& ans, int index,
               vector<string> mapping) {
        if (index >= digits.length()){
            if(output.size() > 0 ) ans.push_back(output);
            return ;
        }
        int num = digits[index] - '0';
       
        for(int i=0;i<mapping[num].size();i++){
            output.push_back(mapping[num][i]);
            solve(digits,output,ans,index+1,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index = 0;
        vector<string> mapping = {"",    "",    "abc",  "def", "ghi",
                                      "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, ans, index,mapping);
        return ans;
    }
};
