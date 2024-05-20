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
    vector<int> listToArray(ListNode* head){
        vector<int> ans;
        while(head != NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        return ans;
    }
    void createList(vector<int> &arr,ListNode* head){
        sort(arr.begin(),arr.end());
     for(int i=0;i<arr.size();i++){
        head->val = arr[i];
        head = head->next;
     }

    }
public:
    ListNode* sortList(ListNode* head) {
        vector<int> arr = listToArray(head);
        createList(arr,head);
        return head;
    }
};
