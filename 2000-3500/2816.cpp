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
    int solve(ListNode* &head){
        if(head == NULL){
            return 0;
        }
        int carry = solve(head->next);
        int value = ((head->val*2)+carry);
        head->val = value%10;
        carry = value/10;
        return carry;
    }
    ListNode* doubleIt(ListNode* head) {
        int ans = solve(head);
        ListNode* temp ;
        if(ans != 0){
            temp = new ListNode(ans);
            temp->next = head;
            return temp;
        }
        return head;
    }
};
