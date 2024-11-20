class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<int,map<string ,int>> ma;
        set<string> st;
        for(auto i:orders){
            int table = stoi(i[1]);
            string item = i[2];

            ma[table][item]++;
            st.insert(item);
        }
        vector<vector<string>> ans;
        vector<string> temp = {"Table"};
        for(auto i:st){
            temp.push_back(i);
        }
        ans.push_back(temp);
        temp.clear();
        for(auto i:ma){
            temp.push_back(to_string(i.first));
            int k = 1;
            for(auto j:i.second){
                
                while(j.first != ans[0][k]){
                    temp.push_back(to_string(0));
                    k++;
                }
                cout<<j.first<<" "<<j.second<<endl;
                temp.push_back(to_string(j.second));
                k++;
            }
            while(k < ans[0].size()){
                temp.push_back(to_string(0));
                    k++;
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
