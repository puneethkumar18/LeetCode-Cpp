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
    void getvector(ListNode* head,vector<int>& arr){
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }   
    }
    ListNode* swapNodes(ListNode* head, int k) {
        // vector<int> arr;
        // getvector(head,arr);
        // int n = arr.size();

        // swap(arr[k-1],arr[n-k]);

        // ListNode* temp = head;
        // int i=0;
        // while(temp != NULL){
        //     temp->val = arr[i++];
        //     temp = temp->next;
        // }

        ListNode* temp = head;
        k--;
        while(k--){
            temp = temp->next;
        }
        ListNode* p1 = temp->next,*p2 = head;
        while(p1){
            p1 = p1->next;
            p2 = p2->next;
        }
        swap(p2->val,temp->val);
        return head;
    }   
};
