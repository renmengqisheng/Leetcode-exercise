题目描述

Given a singly linked list L: L 0→L 1→…→L n-1→L n,
reorder it to: L 0→L n →L 1→L n-1→L 2→L n-2→…

You must do this in-place without altering the nodes' values.

For example,
Given{1,2,3,4}, reorder it to{1,4,2,3}.

思路：

先找到链表的中间结点，注意链表长度为奇数时，找到的刚好是对称轴，为偶数时，找到的是位于对称轴左边的位置。将中间结点和后续链表断开，并将后续链表反转，保存反转后的链表头。再用类似外排的做法将两个链表合并即可。
