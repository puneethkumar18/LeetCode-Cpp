class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> ma;

        int n = order.length();

        for(int i=0;i<n;i++){
            ma[order[i]] = i+1;
        }
        
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(ma[s[i]] != 0 && ma[s[j]] != 0){
                    if(ma[s[i]] > ma[s[j]]){
                        swap(s[i],s[j]);
                        cout<<s<<endl;
                    }
                }
            }
        }
        return s;
    }
};
