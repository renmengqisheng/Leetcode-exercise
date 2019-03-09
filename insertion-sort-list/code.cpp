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
    ListNode *insertionSortList(ListNode *head) {
        if(!head || !head->next) return head;
        ListNode *newHead = new ListNode(0);
        /*做法一
        while(head)
        {
            ListNode *pre = newHead;
            ListNode *cur = newHead->next;
            while(cur)
            {
                if(cur->val > head->val)
                {
                    ListNode *t = new ListNode(head->val);
                    pre->next = t;
                    t->next = cur;
                    break;
                }
                pre = cur;
                cur = cur->next;
            }
            if(!pre->next) pre->next = new ListNode(head->val);
            head = head->next;
        }
        */
        /*做法二
        while(head)
        {
            ListNode *cur = newHead;
            while(cur && cur->next && cur->next->val <= head->val)
                cur = cur->next;
            ListNode *t = new ListNode(head->val);
            t->next = cur->next;
            cur->next = t;
            head = head->next;
        }
        */
        while(head)
        {
            ListNode *next = head->next;
            ListNode *cur = newHead;
            while(cur && cur->next && cur->next->val <= head->val)
                cur = cur->next;
            head->next = cur->next;
            cur->next = head;
            head = next;
        }
        return newHead->next;
    }
};
