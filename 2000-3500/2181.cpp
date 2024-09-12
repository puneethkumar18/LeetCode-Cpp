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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != NULL){
            if(temp->next->val != 0 ){
                temp->val += temp->next->val;
                temp->next = temp->next->next;
            }else{
               if(temp->next->next != NULL){
                    temp = temp->next;
               }else{
                temp->next = NULL;
               }
            }
        }
        return head;
    }
};
