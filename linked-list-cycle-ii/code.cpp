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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next || !head->next->next) return NULL;
        ListNode *fast = head->next->next;
        ListNode *slow = head->next;
        while(fast != slow)
        {
            if(fast->next && fast->next->next)
                fast = fast->next->next;
            else return NULL;
            slow = slow->next;
        }
        fast = head;
        while(fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};
