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
    
    int pairSum(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        stack<ListNode*> st;
        temp = head;
        for(int i=0;i<len/2;i++){
            st.push(temp);
            temp = temp->next;
        }
        int ans = INT_MIN;
        while(temp != NULL){
             int tmp = st.top()->val+temp->val;
            if(ans < tmp){
                ans = tmp;
            }
            st.pop();
            temp = temp->next;
        }
        return ans;
    }
};
