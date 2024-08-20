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
    vector<int> getOrder(ListNode* head){
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        int i=0;
        int j = ans.size()-1;
        vector<int> res;
        while(i <= j){
            res.push_back(ans[i]);
            if(i == j) break;
            i++;
            res.push_back(ans[j]);
            j--;
        }
        
        return res;
    }
    void reorderList(ListNode* head) {
       vector<int> arr = getOrder(head);
        ListNode* temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }

    }
};
