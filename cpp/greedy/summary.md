## 📚 Greedy 题型索引表（基于已做题目）

### 1. 双指针 + 局部选择  
**模板总结**：排序 / 从两端出发，始终移动限制更强的一方。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0011 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | 双指针移动短板 |
| 0455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | 排序 + 两指针分配 |
| 0605 | [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | 一次遍历，能种就种，提前终止 |

---

### 2. 累积收益型  
**模板总结**：把问题拆解为一堆「独立可取的正收益」，直接贪心累计。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0122 | [Best Time To Buy And Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | 收集所有上涨差值 |

---

### 3. 左右扫描 / 局部修正  
**模板总结**：出现违背条件的地方 → 在局部最小修改成本下修正；有时要两次遍历保证方向性。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0135 | [Candy](https://leetcode.com/problems/candy/) | 左右两遍扫描，保证两侧约束 |
| 0665 | [Non-decreasing Array](https://leetcode.com/problems/non-decreasing-array/) | 允许一次修改，局部修正保证整体合法 |

---

### 4. 排序 + 插入/构造  
**模板总结**：通过特殊排序规则 + 逐步插入构造最终解。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0179 | [Largest Number](https://leetcode.com/problems/largest-number/) | 特殊排序规则 `a+b > b+a` |
| 0406 | [Queue Reconstruction By Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | 按身高排序 + 按 k 值插入 |

---

### 5. 区间调度 / 覆盖问题  
**模板总结**：按结束时间排序，优先选择能让剩余空间最大化的区间。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0435 | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) | 按右端点排序，保留最早结束的 |
| 0452 | [Minimum Number Of Arrows To Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | 按右端点排序，尽量覆盖更多气球 |

---

### 6. 基于位置的划分  
**模板总结**：利用元素的最后出现位置确定一个完整区间，然后贪心切分。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0763 | [Partition Labels](https://leetcode.com/problems/partition-labels/) | 扩展到最远边界后再切分 |

---

### 7. 单调栈 / 块合并  
**模板总结**：用单调栈记录「已分块的最优边界」，新元素若不满足单调性 → 回溯合并。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 0768 | [Max Chunks To Make Sorted II](https://leetcode.com/problems/max-chunks-to-make-sorted-ii/) | 单调栈维护区间最大值，必要时合并 |

---

### 8. 对称性 / 枚举有限解  
**模板总结**：当问题没有单一策略时，枚举有限几种可能情况，取贪心解。  

| 题号 | 题目 | 思路 |
|------|------|------|
| 3635 | [Earliest Finish Time For Land And Water Rides II](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/) | 枚举 land→water 和 water→land |
| 3664 | [Two-Letter Card Game](https://leetcode.com/problems/two-letter-card-game/) | 分类计数 + 贪心配对 |
