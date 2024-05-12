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
private:
    ListNode* swap(ListNode* node1,ListNode* node2){
        if(node1 == NULL || node2 == NULL){
            if(node1 != NULL){
                return node1;
            }else{
                return node2;
            }
        }
        int val = node1->val;
        node1->val = node2->val;
        node2->val = val;
        return node2;
    }
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
       
        while(temp != NULL){
            temp = swap(temp,temp->next);
            temp = temp->next;
            
        }
        return head;
    }
};
