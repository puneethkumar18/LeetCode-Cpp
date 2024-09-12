
class Solution {
public:

    int getLength(ListNode* head){
        ListNode* temp = head;
        int cnt = 1;
        while(temp->next != NULL){
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }

    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);
        int cnt = 1;
        
        while(cnt <= length/2){
                head = head->next;
                cnt++;
            }
        return head;
    }
};
