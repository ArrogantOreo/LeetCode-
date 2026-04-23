# 🚀 LeetCode Journey: 算法与数据结构复盘

Welcome to my LeetCode workspace! 
本项目主要用于记录我的算法刷题日常与面试准备。针对**音视频编解码、图像处理及 C++/Python 软件开发**岗位，重点强化数组、链表、树、动态规划等核心数据结构与算法能力。

## 🛠️ 技术栈 (Tech Stack)
* **编程语言:** C++ / Python
* **重点方向:** 基础算法、代码规范、时间/空间复杂度优化

## 📝 刷题进度与复盘 (Progress & Notes)

通过复盘，将复杂的解题思路总结为易懂的技术博客。

| 题号 |                     题目 (Problem)                      | 难度 (Difficulty) | 语言 (Lang) |     核心标签 (Tags)      | 复盘(Think)                                                  |
| ---- | :-----------------------------------------------------: | ----------------- | ----------- | :----------------------: | ------------------------------------------------------------ |
| 1502 |      Can Make Arithmetic Progression From Sequence      | 🟢 Easy            | C++         |       数组 / 排序        | No                                                           |
| 0896 |                     Monotonic Array                     | 🟢 Easy            | C++         |           数组           | No                                                           |
| 13   |                    Roman to Integer                     | 🟢 Easy            | C++         |          字符串          | No                                                           |
| 58   |                   Length of Last Word                   | 🟢 Easy            | C++         |          字符串          | No                                                           |
| 709  |                      To Lower Case                      | 🟢 Easy            | C++         |          字符串          | No                                                           |
| 682  |                      Baseball Game                      | 🟢 Easy            | C++         |      栈、数组、模拟      | for(auto& p:op){ }循环遍历器；Vector 创建动态数组；          |
| 657  |                 Robot Return to Origin                  | 🟢 Easy            | C++         |       字符串、模拟       | 通过抵消的方法代替计算总和再去减，能够用尽量少的内存完成任务 |
| 1275 |            Find Winner on a Tic Tac Toe Game            | 🟢 Easy            | C++         | 数组、哈希表、矩阵、模拟 | 存在两个对抗的单位时，使用1和-1抵消；最后结果会涉及到abs()求绝对值来判定。 |
| 1672 |                 Richest Customer Wealth                 | 🟢 Easy            | C++         |        数组、矩阵        | vector长度用.size()，创建二维数组：vector<vector<int>>       |
| 1572 |                   Matrix Diagonal Sum                   | 🟢 Easy            | C++         |        数组、矩阵        | 主对角线：i==j；副对角线：i+j==len（矩阵宽度）               |
| 1523 |         Count Odd Numbers in an Interval Range          | 🟢 Easy            | C++         |           数学           | 奇数偶数判断<br />奇：number & 1 = 1 二进制最后一位是1 <br />偶：number & 0 = 0 二进制最后一位是0 |
| 1491 | Average Salary Excluding the Minimum and Maximum Salary | 🟢 Easy            | C++         |        数组、排序        | 双指针存储max,min<br />最后减去多余的max,min。               |
| 860  |                     Lemonade Change                     | 🟢 Easy            | C++         |        贪心、数组        | 保证每一步找零都是在消耗最大面值的钱币组合，防止最小单位的钱币不够用。 |
| 976  |               Largest Perimeter Triangle                | 🟢 Easy            | C++         |     贪心、数组、排序     | 在有大小关系的数组里找最大组合值，先排序(从大到小)，再从头到尾查找，最大值都在前面(满足其他条件时)，可以让时间复杂度最低 |
| 1232 |             Check If It Is a Straight Line              | 🟢Easy             | C++         |   几何、二维数组、数学   | 用斜率判断所有点能在一条直线上                               |
| 67   |                       Add Binary                        | 🟢Easy             | C++         |    数学、字符串、模拟    | -‘0’转数字、+‘0’转字符                                       |
| 21   |                 Merge Two Sorted Lists                  | 🟢Easy             | C++         |        递归、链表        | 创建头节点避免空指针和每次访问时需要判断当前节点是不是头节点 |
| 206  |                        反转链表                         | 🟢Easy             | C++         |        递归、链表        | ListNode* curr=head;代码指针curr、head同时指向一个地址。     |
| 2    |                        两数相加                         | 中等              | C++         |     递归、链表、数学     | 进位考虑add=sum/10作为下一次计算的存储                       |

## 💡 个人复盘策略
1. **先思考再动手：** 绝不盲目背题，理清边界条件与逻辑链路。
2. **多解法对比：** 从暴力解法（Brute Force）推导至最优解，关注优化过程。
3. **输出倒逼输入：** 遇到经典题目、高频面试题或自己踩坑的题，撰写复盘博客。

---
*“Talk is cheap. Show me the code.”*
