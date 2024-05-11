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
    bool hasCycle(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode* temp = head;
        ListNode* pos = head->next;
        while(temp != NULL ){
            temp = temp->next;
           if(pos != NULL){
             if(pos->next != NULL){
                pos = pos->next->next;
            }else{
                return false;
            }
           }else{
            return false;
           }
            if(temp == pos){
                return true;
            }
        }
        return false;
    }
};
