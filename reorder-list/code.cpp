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
    void reorderList(ListNode *head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* pre = NULL;  //找到链表的中间结点
        ListNode* cur = slow->next;
        slow->next = NULL;
        while(cur)  //反转后面的链表
        {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        slow = head;  //从开始插入依次插入翻转的链表，此时pre为反转链表的头部
        while(slow && pre)
        {
            ListNode* next = pre->next;
            pre->next = slow->next;
            slow->next = pre;
            pre = next;
            slow = slow->next->next;  //注意slow前面插入了新结点，往下走一步变成走两步
        }
    }
};
