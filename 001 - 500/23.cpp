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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int> ,greater<int>> pq;
        ListNode* head ;
        ListNode* tail;
        
        for(int i=0;i<lists.size();i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        cout<<pq.size()<<endl;
        if(pq.size() == 0){
            return NULL;
        }
        head = new ListNode(pq.top());
        tail = head;
        pq.pop();
        while(!pq.empty()){
            tail->next = new ListNode(pq.top());
            pq.pop();
            tail = tail->next;
        }
        return head;
        
    }
};
