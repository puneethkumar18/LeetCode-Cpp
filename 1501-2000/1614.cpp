class Solution {
public:
    int maxDepth(string s) {
        
        int depth  = 0;
        int high = 0;
        for(int i=0;i<s.length();i++){

            if(s.at(i) == '('){
                high += 1;
            }else if (s.at(i) == ')'){
                high -= 1;
            }

            if(high > depth){
                depth = high;
            }
        }
        return depth;
    }
};
