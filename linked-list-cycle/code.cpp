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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next || !head->next->next) return false;
        ListNode* fast = head->next->next;
        ListNode* slow = head->next;
        while(fast != slow)
        {
            if(fast->next && fast->next->next)
                fast = fast->next->next;
            else return false;
            slow = slow->next;
        }
        return true;
    }
};
