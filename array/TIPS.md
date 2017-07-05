# 我是标题

## 双指针
[1. Two Sum](https://leetcode.com/problems/two-sum)    Hash, Two Pointers

[167. Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted)    跟题1没太大区别

[15. 3Sum](https://leetcode.com/problems/3sum)    题1. Two Pointers解法的升级版

[16. 3Sum Closest](https://leetcode.com/problems/3sum-closest)    题15. 3Sum的改版

[18. 4Sum](https://leetcode.com/problems/4sum)    题15. 3Sum再升级

[268. Missing Number](https://leetcode.com/problems/missing-number)    这个不是双指针，但是是归位系列

[283. Move Zeroes](https://leetcode.com/problems/move-zeroes)    半个双指针的归位型题型

[75. Sort Colors](https://leetcode.com/problems/sort-colors)    归位型的题型，就是把元素放回它应该在的位置

[88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array)    这也是一个归位系列的题，就是把一个数放到其正确的位置
[11. Container With Most Water](https://leetcode.com/problems/container-with-most-water)

[42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water)    个人觉得是题11的升级版

[209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum)    非首尾指针的双指针题型

[287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number)    快慢指针双指针题型，必看[题解](http://keithschwarz.com/interesting/code/?dir=find-duplicate)

## 找数学规律
[561. Array Partition I](https://leetcode.com/problems/array-partition-i)    

[189. Rotate Array](https://leetcode.com/problems/rotate-array)    顺序表经典例题

[169. Majority Element](https://leetcode.com/problems/majority-element)    这个[题解]((https://discuss.leetcode.com/topic/17446/6-suggested-solutions-in-c-with-explanations))讲了很多种方式对这道题进行解答，思路瞬间开阔无比

[229. Majority Element II](https://leetcode.com/problems/majority-element-ii)    题169的升级版

[611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number)    

[621. Task Scheduler](https://leetcode.com/problems/task-scheduler)    这个题作者的原意应该是用queue解

[56. Merge Intervals](https://leetcode.com/problems/merge-intervals)    

[57. Insert Interval](https://leetcode.com/problems/insert-interval)    

[48. Rotate Image](https://leetcode.com/problems/rotate-image)    

[54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix)    

[59. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii)    同54

[31. Next Permutation](https://leetcode.com/problems/next-permutation)    数学方法解

[4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays)    典型分治法

[41. First Missing Positive](https://leetcode.com/problems/first-missing-positive)    找规律解

[118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle)    标准杨辉三角

[119. Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii)    从这个解法理解到杨辉三角的实质

## 单纯的数组型题
[566. Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix)    数组下标的使用与计算

[581. Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray)    逆向思维，数组反向扫描

[605. Can Place Flowers](https://leetcode.com/problems/can-place-flowers)    数组前后补数，营造相同的匹配模式

[66. Plus One](https://leetcode.com/problems/plus-one)    维护变量系列

[485. Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones)    维护变量系列

[414. Third Maximum Number](https://leetcode.com/problems/third-maximum-number)    维护变量系列

[624. Maximum Distance in Arrays](https://leetcode.com/problems/maximum-distance-in-arrays)    维护变量系列

[26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array)    维护变量系列

[628. Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers)    维护变量系列

[80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii)    26的进阶版

[27. Remove Element](https://leetcode.com/problems/remove-element)    题26的变种

[495. Teemo Attacking](https://leetcode.com/problems/teemo-attacking)    维护变量系列

[238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self)    维护变量系列

[228. Summary Ranges](https://leetcode.com/problems/summary-ranges)    维护变量系列

[565. Array Nesting](https://leetcode.com/problems/array-nesting)    记录状态位

[442. Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array)    转换信息存储方式

[448. Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array)    题442的变种

[73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes)    转换关键信息的存储方式

[289. Game of Life](https://leetcode.com/problems/game-of-life)    同上，定义新的信息存储方式以有限的空间容纳更多的信息量

## 二分查找
[35. Search Insert Position](https://leetcode.com/problems/search-insert-position)    最基本二分

[74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix)    最基本二分

[162. Find Peak Element](https://leetcode.com/problems/find-peak-element)    题目描述有问题，但是思路上是很标准的变种二分

[153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array)    标准变种二分

[154. Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii)    需要注意的是因为 (r > (l+r)/2 >= l) 所以在使用二分查找的时候尽量以r为基准，会省很多事

[33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array)    一个变种的二分查找

[81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii)    

[34. Search for a Range](https://leetcode.com/problems/search-for-a-range)    

## 回溯 
**回溯法的精髓是，一个序列里每个元素有两种选择，在某一个循环体内，是不选（会pop掉），在循环体的入口是选**

[78. Subsets](https://leetcode.com/problems/subsets)    最基本回溯

[39. Combination Sum](https://leetcode.com/problems/combination-sum)    最基本回溯

[40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii)    回溯进阶版，需要清楚的理解回溯过程

[216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii)    同上，进阶版

[90. Subsets II](https://leetcode.com/problems/subsets-ii)    同需要清楚理解回溯过程，在循环体的入口处选之前，进行筛选，去除可能重复的项

## 贪心算法
[122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii)    最基本贪心

[55. Jump Game](https://leetcode.com/problems/jump-game)    基本的贪心算法

[45. Jump Game II](https://leetcode.com/problems/jump-game-ii)    贪心算法，想要复杂度最优需要考虑贪心的条件

## DP
**DP的关键就在于：定位子问题以及找到子问题的联系点**

[53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray)    最简单的DP

[152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray)    53的改版

[62. Unique Paths](https://leetcode.com/problems/unique-paths)    最简单DP

[63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii)    最简单DP，62的条件限制版

[64. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum)    最简单DP，63的改版

[120. Triangle](https://leetcode.com/problems/triangle)    64的改版

[121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)    最简单DP

[123. Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii)    121升级版

## 深度优先遍历
**一般dfs写成栈的形式比较万用，递归写法的好处是结构清晰**

[79. Word Search](https://leetcode.com/problems/word-search)    

## 栈
[84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram)    思路比较难的一个栈

[85. Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle)    可以根据84做，另外这个[动态规划的思路]

(https://discuss.leetcode.com/topic/6650/share-my-dp-solution)十分棒

[105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal)    另可以用递归解

[106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal)    另一个java写的超清晰[递归解](https://discuss.leetcode.com/topic/3296/my-recursive-java-code-with-o-n-time-and-o-n-space)

## hash
[217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate)    最简单hash系列

[219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii)    题217再转换下思路

[532. K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array)    

[128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence)    准确的说这个题应该是一个叫并查集的思路

[380. Insert Delete GetRandom O(1)](https://leetcode.com/problems/insert-delete-getrandom-o(1))    考察数据结构的题型

[381. Insert Delete GetRandom O(1)- Duplicates allowed](https://leetcode.com/problems/insert-delete-getrandom-o(1)--duplicates-allowed)    题380的升级版

[560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k)    逆向思考题型