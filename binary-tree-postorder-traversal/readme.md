题目描述

Given a binary tree, return the postorder traversal of its nodes' values.

For example:
Given binary tree{1,#,2,3},

   1
    \
     2
    /
   3

return[3,2,1].

Note: Recursive solution is trivial, could you do it iteratively?

完成迭代版的后序遍历。

思路：

后序遍历是左右中，先序遍历是中左右，可以先用类似先序遍历的迭代版代码实现中右左，每次将该输出的值不输出，改为压入栈中，最后统一从栈中依次输出，即为左右中的顺序，从而实现后序遍历。
