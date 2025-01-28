class Solution {
public:
    int f(int n, vector<int>& arr) {
        if (n <= 3) {
            return arr[n];
        }
        if (arr[n] != -1) {
            return arr[n];
        }
        return arr[n] =  f(n - 1, arr) + f(n - 2, arr) + f(n - 3, arr);
    }
    int tribonacci(int n) {
        vector<int> arr(38, -1);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 2;
        return f(n, arr);
    }
};
