/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        if(head  == NULL || head->next == NULL){
            return NULL;
        }

        if(head->next == head){
            return head;
        }
        bool isCyclePresent = false;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL&& fast->next != NULL){
            fast = fast->next->next;
            
            slow = slow->next;

            if(slow == fast){
                isCyclePresent = true;
                break;
            } 
        }
        if(isCyclePresent == false){
            return NULL;
        }
        

        while(head != slow){
            head = head->next;
            
            slow = slow->next;

        }
        return slow;
    }
};
