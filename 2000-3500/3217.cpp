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
    
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_map<int ,bool>m;
        for(auto i:nums){
            m[i] = true;
        }
        ListNode* temp = new ListNode(-1);
        ListNode* tail = temp;
        while(head != NULL){
            if(!m[head->val]){
                tail->next = head;
                tail = tail->next;
            }
            head  = head->next;
        }
        tail->next = NULL;
        return temp->next;
    }
};
