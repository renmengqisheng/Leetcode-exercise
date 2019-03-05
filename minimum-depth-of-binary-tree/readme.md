题目描述

Given a binary tree, find its minimum depth.The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

思路一：

使用深度优先遍历，递归实现。

若为空树，则返回0；
若为叶子结点，则返回1；
若左子树为空，右子树不为空，则返回右子树的最小深度+1；（加1是因为要加上当前结点，下同）
若右子树为空，左子树不为空，则返回左子树的最小深度+1；
若左右子树双全，则取左、右子树最小深度的较小值，+1。


思路二：

使用广度优先遍历。

采用广度优先搜索，或者层序遍历，找到的第一个叶节点的深度即是最浅。

