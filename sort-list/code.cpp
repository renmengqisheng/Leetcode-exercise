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
    ListNode *sortList(ListNode *head) {
        if(!head || !head->next) return head;
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *pre = NULL;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            pre = slow;
            slow = slow->next;
        }
        pre->next = NULL;
        return merge(sortList(head), sortList(slow));
    }
    /*
    ListNode *merge(ListNode *h1, ListNode *h2)
    {
        if(!h1) return h2;
        if(!h2) return h1;
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        while(h1 && h2)
        {
            if(h1->val < h2->val)
            {
                cur->next = h1;
                h1 = h1->next;
                cur = cur->next;
            }
            else
            {
                cur->next = h2;
                h2 = h2->next;
                cur = cur->next;
            }
        }
        if(h1) cur->next = h1;
        if(h2) cur->next = h2;
        return head->next;
    }
    */
    ListNode *merge(ListNode *h1, ListNode *h2)
    {
        if(!h1) return h2;
        if(!h2) return h1;
        if(h1->val <= h2->val)
        {
            h1->next = merge(h1->next, h2);
            return h1;
        }
        else
        {
            h2->next = merge(h1, h2->next);
            return h2;
        }
    }
};
