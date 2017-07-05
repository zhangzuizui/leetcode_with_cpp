# 我是标题

## 双指针
[1. Two Sum](https://leetcode.com/problems/two-sum)Hash, Two Pointers

[167. Two Sum II - Input array is sorted]()跟题1没太大区别

[15. 3Sum]()题1. Two Pointers解法的升级版

[16. 3Sum Closest]()题15. 3Sum的改版

[18. 4Sum]()题15. 3Sum再升级

[268. Missing Number]()这个不是双指针，但是是归位系列

[283. Move Zeroes]()半个双指针的归位型题型

[75. Sort Colors]()归位型的题型，就是把元素放回它应该在的位置

[88. Merge Sorted Array]()这也是一个归位系列的题，就是把一个数放到其正确的位置

[11. Container With Most Water](https://leetcode.com/problems/container-with-most-water)

[42. Trapping Rain Water]()个人觉得是题11的升级版

[209. Minimum Size Subarray Sum]()非首尾指针的双指针题型

[287. Find the Duplicate Number]()快慢指针双指针题型，必看[题解](http://keithschwarz.com/interesting/code/?dir=find-duplicate)


## 找数学规律
[561. Array Partition I]()

[189. Rotate Array]()顺序表经典例题

[169. Majority Element]()这个[题解]((https://discuss.leetcode.com/topic/17446/6-suggested-solutions-in-c-with-explanations))讲了很多种方式对这道题进行解答，思路瞬间开阔无比

[229. Majority Element II]()题169的升级版

[611. Valid Triangle Number]()

[621. Task Scheduler]()这个题作者的原意应该是用queue解

[56. Merge Intervals]()

[57. Insert Interval]()

[48. Rotate Image]()

[54. Spiral Matrix]()

[59. Spiral Matrix II]()同54

[31. Next Permutation]()数学方法解

[4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays)Divide and Conquer 总之是用一种数学方法解

[41. First Missing Positive]()找规律解

[118. Pascal's Triangle]()标准杨辉三角

[119. Pascal's Triangle II]()从这个解法理解到杨辉三角的实质

## 单纯的数组型题
[566. Reshape the Matrix]()数组下标的使用与计算

[581. Shortest Unsorted Continuous Subarray]()逆向思维，数组反向扫描

[605. Can Place Flowers]()数组前后补数，营造相同的匹配模式

[66. Plus One]()维护变量系列

[485. Max Consecutive Ones]()维护变量系列

[414. Third Maximum Number]()维护变量系列

[624. Maximum Distance in Arrays]()维护变量系列

[26. Remove Duplicates from Sorted Array]()维护变量系列

[628. Maximum Product of Three Numbers]()维护变量系列

[80. Remove Duplicates from Sorted Array II]()26的进阶版

[27. Remove Element]()题26的变种

[495. Teemo Attacking]()维护变量系列

[238. Product of Array Except Self]()维护变量系列

[228. Summary Ranges]()维护变量系列

[565. Array Nesting]()记录状态位

[442. Find All Duplicates in an Array]()转换信息存储方式

[448. Find All Numbers Disappeared in an Array]()题442的变种

[73. Set Matrix Zeroes]()转换关键信息的存储方式

[289. Game of Life]()同上，定义新的信息存储方式以有限的空间容纳更多的信息量

## 二分查找
[35. Search Insert Position]()最基本二分

[74. Search a 2D Matrix]()最基本二分

[162. Find Peak Element]()题目描述有问题，但是思路上是很标准的变种二分

[153. Find Minimum in Rotated Sorted Array]()标准变种二分

[154. Find Minimum in Rotated Sorted Array II]()需要注意的是因为 (r > (l+r)/2 >= l) 所以在使用二分查找的时候尽量以r为基准，会省很多事

[33. Search in Rotated Sorted Array]()Binary Search 一个变种的二分查找

[81. Search in Rotated Sorted Array II]()

[34. Search for a Range]()Binary Search

## 回溯 
回溯法的精髓是，一个序列里每个元素有两种选择，在某一个循环体内，是不选（会pop掉），在循环体的入口是选

[78. Subsets]()最基本回溯

[39. Combination Sum]()最基本回溯

[40. Combination Sum II]()回溯进阶版，需要清楚的理解回溯过程

[216. Combination Sum III]()同上，进阶版

[90. Subsets II]()同需要清楚理解回溯过程，在循环体的入口处选之前，进行筛选，去除可能重复的项

## 贪心算法
[122. Best Time to Buy and Sell Stock II]()最基本贪心

[55. Jump Game]()基本的贪心算法

[45. Jump Game II]()贪心算法，想要复杂度最优需要考虑贪心的条件

## DP
DP的关键就在于：定位子问题以及找到子问题的联系点

[53. Maximum Subarray]()最简单的DP

[152. Maximum Product Subarray]()53的改版

[62. Unique Paths]()最简单DP

[63. Unique Paths II]()最简单DP，62的条件限制版

[64. Minimum Path Sum]()最简单DP，63的改版

[120. Triangle]()64的改版

[121. Best Time to Buy and Sell Stock]()最简单DP

[123. Best Time to Buy and Sell Stock III]()121升级版


## 深度优先遍历
一般dfs写成栈的形式比较万用，递归写法的好处是结构清晰
[79. Word Search]()


## 栈
[84. Largest Rectangle in Histogram]()思路比较难的一个栈

[85. Maximal Rectangle]()可以根据84做，另外这个[动态规划的思路](https://discuss.leetcode.com/topic/6650/share-my-dp-solution)十分棒

[105. Construct Binary Tree from Preorder and Inorder Traversal]()另可以用递归解

[106. Construct Binary Tree from Inorder and Postorder Traversal]()另一个java写的超清晰[递归解](https://discuss.leetcode.com/topic/3296/my-recursive-java-code-with-o-n-time-and-o-n-space)


## hash
[217. Contains Duplicate]()最简单hash系列

[219. Contains Duplicate II]()题217再转换下思路

[532. K-diff Pairs in an Array]()

[128. Longest Consecutive Sequence]()准确的说这个题应该是一个叫并查集的思路

[380. Insert Delete GetRandom O(1)]()考察数据结构的题型

[381. Insert Delete GetRandom O(1)- Duplicates allowed]()题380的升级版

[560. Subarray Sum Equals K]()逆向思考题型