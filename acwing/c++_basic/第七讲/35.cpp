/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // 方法一 借助栈的性质

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) {
            return head;
        }
        stack<ListNode*> st;
        ListNode* cur = head;
        while(cur != NULL) {
            st.push(cur);
            cur = cur -> next;
        }
        auto dummy = new ListNode(-1);
        if(!st.empty()) {
            cur = st.top();
            dummy -> next = cur;
            st.pop();
        }
        while(!st.empty()) {
            cur = cur -> next = st.top();
            st.pop();
        }
        cur -> next = NULL;
        return dummy -> next;
    }
};


//方法二 迭代

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        while(cur != NULL) {
            ListNode* next = cur -> next;
            cur -> next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};


//方法三 递归

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            return head;
        }
        ListNode* newHead = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return newHead;
    }
};
