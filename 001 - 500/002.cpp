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
    ListNode* solve(ListNode* l1, ListNode* l2,int remainder){
        if(l1 == NULL && l2== NULL){
            if(remainder != 0){
                ListNode* temp = new ListNode(remainder);
                return temp;
            }
            return NULL;
        }
        if(l1->next != NULL && l2->next == NULL){
            ListNode* temp = new ListNode(0);
            l2->next = temp;
        }
        if(l2->next != NULL && l1->next == NULL){
            ListNode* temp = new ListNode(0);
            l1->next = temp;
        }
        
        
        int sum = l1->val + l2->val + remainder;
        
        int rem = sum/10;

        remainder = rem;
        l1->val = sum-(10*rem);
        
        l1->next = solve(l1->next,l2->next,remainder);
        
        return l1; 
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       return solve(l1,l2,0);
    }
};
