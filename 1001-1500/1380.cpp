class Solution {
public:
    int maxOfRow(vector<int> arr) {
        sort(arr.begin(), arr.end());
        return arr[0];
    }
    bool isMinOfCol(vector<vector<int>>& matrix, int col, int val) {
        vector<int> arr;
        for (int i = 0; i < matrix.size(); i++) {
            arr.push_back(matrix[i][col]);
        }
        sort(arr.rbegin(), arr.rend());
        if (val != arr[0])
            return false;
        return true;
    }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++) {
            int min = maxOfRow(matrix[i]);
            for (int j = 0; j < matrix[i].size(); j++) {
                if (min == matrix[i][j]) {
                    if (isMinOfCol(matrix, j, min)) {
                        ans.push_back(min);
                    }else{
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
