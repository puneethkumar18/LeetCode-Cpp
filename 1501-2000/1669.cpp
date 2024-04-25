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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        for(int i=0;i<a-1;i++){
            curr = curr->next;
        }
        ListNode* curr_next = curr;
        for(int i=a;i<=b;i++){
            curr_next = curr_next->next;
        }
        curr->next = list2;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = curr_next->next;

        return list1;
    }
};
