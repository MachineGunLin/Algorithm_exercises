/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplication(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        ListNode* p = dummy;
        while(p -> next) {
            ListNode* q = p -> next;
            while(q != NULL && p -> next -> val == q -> val) {
                q = q -> next;
            }
            if(p -> next -> next == q) {
                p = p -> next;
            } else {
                p -> next = q;
            }
        }
        return dummy -> next;
    }
};
