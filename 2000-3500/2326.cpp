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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));

        int row = 0;
        int col = 0;
        int rowEnd = m -1 ;
        int colEnd = n -1 ;

        while (head != NULL) {
            for (int i = col; head != NULL && i <= colEnd; i++) {
                ans[row][i] = head->val;
                
                head = head->next;
            }
            row++;
            for(int i=row; head != NULL && i<=rowEnd;i++){
                ans[i][colEnd] = head->val;
                head = head->next;
            }
            colEnd--;

            for(int i=colEnd;head != NULL && i>=col;i--){
                ans[rowEnd][i] = head->val;
                head = head->next;
            }
            rowEnd--;
            for(int i=rowEnd;head != NULL&&i>=row;i--){
                ans[i][col] = head->val;
                head = head->next;
            }
            col++;
        }
        return ans;
    }
};
