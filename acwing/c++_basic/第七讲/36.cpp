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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        while(l1 != NULL && l2 != NULL) {
            if(l1 -> val < l2 -> val) {
                cur = cur -> next = l1;
                l1 = l1 -> next;
            } else {
                cur = cur -> next = l2;
                l2 = l2 -> next;
            }
        }
        if(l1 != NULL) {
            cur -> next = l1;
        } else {
            cur -> next = l2;
        }
        return dummy -> next;
    }
};
