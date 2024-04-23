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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != NULL){
            int num1 = temp->val;
            int num2 = temp->next->val;
            int gcd = __gcd(num1,num2);
            
             ListNode* middle =  new ListNode(gcd);
             middle->next = temp->next;
             temp->next = middle;
             temp = middle->next;
        }

        return head;
    }
};
