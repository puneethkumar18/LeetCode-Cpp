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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> ans;
        while(head != NULL){
            ListNode* temp = head->next;
            int val  = head->val;

            while(temp != NULL){
                if(temp->val > val){
                    val = temp->val;
                    break;
                }
                temp = temp->next;
            }
            if(val  == head->val){
                ans.push_back(0);
            }else{
                ans.push_back(val);
            }
            head = head->next;
        }
        return ans;
    }
};
