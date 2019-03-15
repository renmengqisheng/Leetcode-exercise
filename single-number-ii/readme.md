题目描述

Given an array of integers, every element appears three times except for one. Find that single one.

Note: 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

思路：

对每一位单独统计出现1的次数，如果出现的次数不能整除3，说明唯一存在的数在这一位上为1, 时间复杂度O(32N)，即O(N)。
