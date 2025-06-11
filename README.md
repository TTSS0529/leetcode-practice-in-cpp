# leetcode-practice-in-cpp
This repository is for my personal LeetCode practice using mainly C++. 

## 🎯 Training Goal

My initial target is to solve **one problem per day**. If I miss any problems during the weekdays, I will catch up on them over the weekend.(to be continued...)

# 🚀 LeetCode Training Progress

- 📅 Start Date: 2025-06-09
- ✅ Total Problems Solved: **3/7(week one)**  
- 📈 Difficulty Breakdown: Easy(2) / Medium(1) / Hard(0) / Total(3)  
- 🧠 Topics Covered: Linked List, Array, Dynamic Programming, Stack, etc.

---

## 📋 Problem Overview (Click to view problem or solution folder)

### 📁 Folder Structure & Usage

Each problem is placed in its own folder, which contains:

- A `.hpp` header file for declarations  
- A `test.cpp` file for testing all versions  
- Multiple `.cpp` files, each representing a different version of the solution  

To compile, just compile any solution `.cpp` together with `test.cpp`.

Example:
c++ -Wall -Wextra -Werror brute_force.cpp test.cpp -o test && ./test

📌 If a problem folder only contains a brute_force version, that means the first try already hit 100% runtime, so I haven’t optimized it further (yet). I’ll revisit it if I come up with a better idea.

---

### 🔗 Linked List

| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | [Runtime(100%)](./cpp/linked_list/0021_merge_two_sorted_lists/) | Recursive vs Iterative |
| 0086 | [Partition List](https://leetcode.com/problems/partition-list/) | Medium | [Runtime(100%)](./cpp/linked_list/0086_partiton_list/) | Dummy node / In-place insertion |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | [Runtime(100%)](./cpp/linked_list/0206_reverse_linked_list/) | Tail-cutting / Recursive / Iterative |

---
