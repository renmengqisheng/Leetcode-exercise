题目描述

Given a linked list, return the node where the cycle begins. If there is no cycle, returnnull.

Follow up:
Can you solve it without using extra space?

思路：

快慢指针，快指针每次走两步，慢指针每次走一步，如果无环，则快指针会先到达终点NULL，直接返回。如果有环，则快慢指针一定会相遇。第一次相遇时，将快指针从头开始，和慢指针同时走，每次都走一步，再次相遇时即为入口结点。

证明：

slow： 走过 x 个节点
fast：走过 2x 个节点
第一次相遇时，2x-x = b+c；    (1)
slow走过的距离为 x = a + b + n*(b + c);   (2)
由(1)(2)可得 b+c = n*(b+c) + a + b；
n>0时，a+b = (1-n) * (b+c) <= 0,不成立。故n = 0,得出：a = c。
