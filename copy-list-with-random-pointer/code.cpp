/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head || !head->next) return head;
        RandomListNode *cur = head;
        while(cur)
        {
            RandomListNode *t = new RandomListNode(cur->label);
            t->next = cur->next;
            cur->next = t;
            cur = t->next;
        }
        cur = head;
        while(cur)
        {
            RandomListNode *t = cur->next;
            if(cur->random) t->random = cur->random->next;
            cur = t->next;
        }
        RandomListNode *newhead = head->next;
        cur = head;
        while(cur)
        {
            RandomListNode *t = cur->next;
            cur->next = t->next;
            if(t->next) t->next = t->next->next;
            cur = cur->next;
        }
        return newhead;
    }
};
