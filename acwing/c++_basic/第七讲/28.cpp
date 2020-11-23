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
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;              //把当前节点的值修改为下一个节点的值，并跳过下一个节点
        node -> next = node -> next -> next;
    }
};
