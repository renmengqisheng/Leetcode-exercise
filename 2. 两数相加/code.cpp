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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* cur = head;
        int carry = 0;
        while(l1 && l2)
        {
            if(l1->val+l2->val+carry >= 10)
            {
                cur->next = new ListNode(l1->val+l2->val+carry-10);
                carry = 1;
            }
            else
            {
                cur->next = new ListNode(l1->val+l2->val+carry);
                carry = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
            cur = cur->next;
        }
        while(l1)
        {
            if(l1->val+carry >= 10)
            {
                cur->next = new ListNode(l1->val+carry-10);
                carry = 1;
            }
            else
            {
                cur->next = new ListNode(l1->val+carry);
                carry = 0;
            }
            l1 = l1->next;
            cur = cur->next;
        }
        while(l2)
        {
            if(l2->val+carry >= 10)
            {
                cur->next = new ListNode(l2->val+carry-10);
                carry = 1;
            }
            else
            {
                cur->next = new ListNode(l2->val+carry);
                carry = 0;
            }
            l2 = l2->next;
            cur = cur->next;
        }
        if(carry) cur->next = new ListNode(1);
        return head->next;
    }
};
