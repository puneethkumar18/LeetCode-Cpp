class Solution {
public:
    bool check(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch  == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        cout<<s.length()<<endl;
        queue<char> q;
        int count = 0;
        
        int i ;
        for( i=0;i<k;i++){
            if(check(s[i])){
                count++;
            }
            q.push(s[i]);
        }
        int max = count;
        while(i < s.length()){
            if(check(q.front())){
                count--;
            }
            q.pop();
            if(check(s[i])){
                count++;
            }
            q.push(s[i]);

            if(count > max){
                max = count;
            }
            i++;
        }
        return max;

    }
};
