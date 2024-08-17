class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(int i=0;i<details.size();i++){
            string val = "";
            val += details[i][11];
            val += details[i][12];
            int r = stoi(val);
            if(r > 60){
                ans++;
            }
        }
        return ans;
    }
};
