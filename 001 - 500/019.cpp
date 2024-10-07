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
    ListNode* removeNthFromEnd(ListNode* head, int& n) {
        if(head == NULL){
            return NULL;
        }
        head->next = removeNthFromEnd(head->next,n);
       n = n-1;
        if(n == 0){

            cout<<" "<<head->val<<endl;
            return head->next ;
        }
        return head;
    }
};
