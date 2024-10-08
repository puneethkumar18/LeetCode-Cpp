class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> odd;
        priority_queue<int> even;
        stack<int> q;

        while(num != 0){
            int temp = num%10;
            num = num/10;
            q.push(temp);
            if(temp&1){
                odd.push(temp);
            }else{
                even.push(temp);
            }
        }
        int ans = 0;
        while(!q.empty()){
            ans *= 10;
            if(q.top()&1){
                ans+= odd.top();
                odd.pop();
            }else{
                ans+= even.top();
                even.pop();
            }
            q.pop();
        }
        return ans;
    }
};
