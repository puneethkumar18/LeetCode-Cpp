class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> q;

        for (int i : amount) {
            if (i > 0) {
                q.push(i);
            }
        }
        int res = 0;
        while (q.size() > 1) {
            res++;
            int temp1 = q.top();
            q.pop();
            int temp2 = q.top();
            q.pop();
            temp1--;
            temp2--;
            if (temp1 > 0) {
                q.push(temp1);
            }
            if (temp2 > 0) {
                q.push(temp2);
            }
        }
        if (!q.empty())
            res += q.top();
        return res;
    }
};
