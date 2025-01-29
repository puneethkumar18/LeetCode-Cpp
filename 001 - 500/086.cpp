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
    ListNode* insert(ListNode* head,int val){

        ListNode* node = new ListNode(val);
        if(head == NULL){
            return node;
        }
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
        return head;
    }
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL){
            return NULL;
        }
        ListNode* first = NULL;
        ListNode* last = NULL;
        while(head != NULL){
            if(head->val < x){
                first = insert(first,head->val);
            }else{
                last = insert(last,head->val);
            }
            head = head->next; 
        }
        ListNode* temp = first;
        if(first == NULL ){
            return last;
        }
        while( temp != NULL && temp->next != NULL){
            temp = temp->next;
        }
        if(temp != NULL)temp->next = last;

        // ListNode* first = NULL;
        // for(int i=0;i<10;i++){
        //     first = insert(first,i);
        // }
        return first;
    }
};
