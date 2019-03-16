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
    /************************************************
    *思路一
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
    ***************************************/
    /***************************************
    *思路二
    ***************************************/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* cur = head;
        int carry = 0;
        while(l1 || l2)
        {
            int x = l1?l1->val:0;
            int y = l2?l2->val:0;
            int sum = x + y + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry) cur->next = new ListNode(carry);
        return head->next;
    }
};
