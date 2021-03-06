给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

思路：

设置一个变量保存进位，对两个链表从左往右进行相加。

当两个数的和再加上进位大于等于10时，产生进位，当前位的数为总和减10，注意两个数相加的进位只有1。当两个数的和再加上进位小于10时，当前位的数即为总和。

两个链表的长度很可能不相等，对剩余的链表进行类似前述的操作。

最后，全部位相加后可能还有进位，此时应将增加一个结点保存进位。
