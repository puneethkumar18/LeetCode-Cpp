class Solution {
public:
    string removeStars(string s) {
        stack<char> t;
        string a;
        int i=0,j=s.size()-1;
        while(j>=i){
            if(s[i]=='*'){
                t.pop();
            }
            else{
                t.push(s[i]);
            }
            i++;
        }
        
        while(!t.empty()){
             a.push_back(t.top());
             t.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
