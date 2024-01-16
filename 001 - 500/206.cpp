 
class Solution {
public:

    ListNode* reverseList(ListNode* head) {
        ListNode* node = NULL;
        while(head){
            ListNode* temp = head;
            head = head->next;
            temp->next = node ;
            node = temp;
        }
        return node;
    }
};
