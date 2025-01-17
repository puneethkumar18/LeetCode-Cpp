class Solution {
public:
    bool solve(vector<int>& derived, int n, int i, int prev, int start) {
        
        if (i >= n) {
            return true;
        }
        if (i == n - 1) {
            if(prev^start == derived[i]){
                return true;
            }else {
                return false;
            }
        } else {
            if (prev ^ 0 == derived[i]) {
                return solve(derived, n, i + 1,  0, start);
            } else {
                return solve(derived, n, i + 1,  1, start);
            }
        }
    }
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        bool zero = solve(derived, n, 0, 0, 0);
        bool one = solve(derived, n, 0, 1, 1);
        
        return zero || one;
    }
};
