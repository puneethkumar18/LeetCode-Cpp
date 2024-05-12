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
    ListNode* getLastVal(ListNode* head){
        if(head->next->next == NULL){
            ListNode* temp = head->next;
            head->next = NULL;
            return temp;
        }
        ListNode* temp = getLastVal(head->next);
        return temp;
    }
    int len(ListNode* head){
        int ans = 0;
        while(head != NULL){
            ans++;
            head = head->next;
        }
        return ans;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        int length = len(head);
        int size = k%length;
        for(int i=0;i<size;i++){
            ListNode* temp = getLastVal(head);
            temp->next =  head;
            head = temp;
        }
        return head;
    }
};
