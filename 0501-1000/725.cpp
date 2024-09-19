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
    void getvector(ListNode* head,vector<int>& ans){
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        vector<int> arr;
        getvector(head,arr);
        int n = arr.size();
        int eleCount = n/k;
        int additional = n%k;
        
        int i=0;
        int l = 0;
        while(i<n){
            ListNode* temp = new ListNode(-1);
            ListNode* tail = temp;
            for(int j = 0;j<eleCount;j++){
                tail->next = new ListNode(arr[i]);
                i++;
                tail = tail->next;
            }
            if(additional != 0){
                additional--;
                tail->next = new ListNode(arr[i]);
                i++;
                tail = tail->next;
            }

            tail->next = NULL;
            ans[l++] = temp->next;
        }
        return ans;
    }
};
