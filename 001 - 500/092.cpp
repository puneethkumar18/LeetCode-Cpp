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
    vector<int> getVector(ListNode* head){
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        return ans;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> res = getVector(head);
        reverse(res.begin()+left-1,res.begin()+right);
        ListNode* temp = head;
        for(int i=0;i<res.size();i++){
            temp->val = res[i];
            temp = temp->next;
        }
        return head;
    }
};
