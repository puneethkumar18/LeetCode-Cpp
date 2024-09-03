class Solution {
public:
    string solve(vector<vector<string>>& paths,string str){
        string temp = "" ;
        for(int i=0;i<paths.size();i++){
            if(paths[i][0] == str){
                temp = paths[i][1];
                break;
            }
        }
        if(temp == ""){
            return str;
        }
        string res = solve(paths,temp);
        return res;
    }
    string destCity(vector<vector<string>>& paths) {
        return solve(paths,paths[0][0]);
    }
};
