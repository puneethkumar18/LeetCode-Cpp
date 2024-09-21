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
    int len(ListNode* head){
        int ans = 0;
        while(head != NULL){
            ans++;
            head = head->next;
        }
        return ans;
    }

    ListNode* solve(ListNode* head ,int k){

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while( k != 0 && curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
           
            k--;
        }
        
        return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(len(head) < k){
            return head;
        }
        ListNode* temp = head;
        int i = 0;
        while(i < k ){
            temp = temp->next;
            i++;
        }
        ListNode* res =  reverseKGroup(temp,k);
        ListNode* rev = solve(head,k);
        ListNode* revHead = rev;
        while(rev->next != NULL){
            rev = rev->next;
        }
        cout<<rev->val<<endl;
        rev->next = res;
        return revHead;
    }
};
