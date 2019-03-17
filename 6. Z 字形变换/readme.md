将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "LEETCODEISHIRING" 行数为 3 时，排列如下：

L   C   I   R
E T O E S I I G
E   D   H   N
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："LCIRETOESIIGEDHN"。

请你实现这个将字符串进行指定行数变换的函数：

string convert(string s, int numRows);
示例 1:

输入: s = "LEETCODEISHIRING", numRows = 3
输出: "LCIRETOESIIGEDHN"

示例 2:

输入: s = "LEETCODEISHIRING", numRows = 4
输出: "LDREOEIIECIHNTSG"
解释:

L     D     R
E   O E   I I
E C   I H   N
T     S     G

思路一：

准备一个元素类型为char的二维数组并初始化元素为0，仿照Z字形打印的顺序依次将字符串中的字符填入二维数组，最后将二维数组每一行中的非0元素合并成字符串返回。

通过观察可知，打印时有两个方向，向下和向右上，向右上可以分解成向上和向右两个子方向。从而可知，准备两个方向变量，一个变量控制上下，另一变量控制向右。

当向下打印时，不右移；当向上打印时同时向右移。通过两个方向变量的控制，即可实现Z字形打印。

思路二：

准备一个元素类型为string的一维数组，只考虑当前字符应处于第几行并加入到当前行的string中，此时只需准备一个方向变量，用于控制上下的移动。最后将一维数组中的所有字符串合并返回即可。

