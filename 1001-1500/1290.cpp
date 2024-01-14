
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
            count++;
        }
        long long ans = 0;
        for(int i=count-1;i>=0;i--){
            ans=ans+(arr[i]*pow(2,count-i-1));
        }
        return ans;
    }
};
