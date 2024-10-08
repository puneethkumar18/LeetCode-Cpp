class Solution {
public:
    void solve(string str,vector<string>& ans,char sep){
        string temp = "";
        for(auto i:str){
            if(i == sep){
                if(!temp.empty())ans.push_back(temp);
                temp = "";
            }else{
                temp += i;
            }
        }
        if(!temp.empty())ans.push_back(temp);
    }
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(auto i:words){
            solve(i,ans,separator);
        }
        return ans;
    }
};
