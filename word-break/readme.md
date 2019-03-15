题目描述

Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

For example, given
s ="leetcode",
dict =["leet", "code"].

Return true because"leetcode"can be segmented as"leet code".

思路：

使用动态规划。

vb[i]表示 s 中以 i - 1 结尾的字符串是否可被 dict 拆分。

vb[i] = vb[j] &&（s[j…i]是否在dict内）, 0 <= j < i。
