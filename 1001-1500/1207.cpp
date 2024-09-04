class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> m;
        for(auto i:arr){
            m[i]++;
        } 
        map<int,bool> temp;
        for(auto i:m){
            if(temp[i.second] == false){
                temp[i.second] = true;
            }else{
                return false;
            }
        }
        return true;
    }

};
