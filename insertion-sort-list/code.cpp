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
        return newHead->next;
    }
};
