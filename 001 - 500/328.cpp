/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* odd = head ;
        ListNode* oddTail = odd;

        ListNode* even  = head->next;
        ListNode* evenTail = even;

        head = head->next->next;
        bool isEven = false;
        while(head != NULL){
            if(isEven){
                evenTail->next = head;
                evenTail = evenTail->next;
            }else{
                oddTail->next = head;
                oddTail = oddTail->next;
            }
            head = head->next;
            isEven = isEven == true ? false : true;
        }
        oddTail->next = even;
        evenTail->next = NULL;
        return odd;
    }
};
