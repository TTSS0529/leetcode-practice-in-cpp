# leetcode-practice-in-cpp
This repository is for my personal LeetCode practice using mainly C++. 

## 🎯 Training Goal

My initial target is to solve **one problem per day**. If I miss any problems during the weekdays, I will catch up on them over the weekend.(to be continued...)

# 🚀 LeetCode Training Progress

- 📅 Start Date: 2025-06-09
- ✅ Total Problems Solved: **7/7(week one)**  
- 📈 Difficulty Breakdown: Easy(3) / Medium(4) / Hard(0) / Total(7)  
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

### 🔗 Linked List (Total: 5 problems)

| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | [Runtime(100%)](./cpp/linked_list/0021_merge_two_sorted_lists/) | Recursive vs Iterative |
| 0086 | [Partition List](https://leetcode.com/problems/partition-list/) | Medium | [Runtime(100%)](./cpp/linked_list/0086_partition_list/) | Dummy node / In-place insertion |
| 0138 | [Copy List With Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | Medium | [Runtime(>90%,sometimes 100%)](./cpp/linked_list/0138_copy_list_with_random_pointer/) | Hash Map / In-place / O(1) extra space optimized |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | [Runtime(100%)](./cpp/linked_list/0206_reverse_linked_list/) | Tail-cutting / Recursive / Iterative |
| 0237 | [Delete Node In A Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) | Medium | [Runtime(Not 100%), good enough](./cpp/linked_list/0237_delete_node_in_a_linked_list/) | Loop-copy / O(1) overwrite |

---

### 🧱 Stack & Queue (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0020 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | [Runtime(100%)](./cpp/stack_queue/0020_valid_parentheses/) | Stack / Bracket matching |
| 0155 | [Min Stack](https://leetcode.com/problems/min-stack/) | Medium | [Runtime(~45% but classic, can improve later)](./cpp/stack_queue/0155_min_stack/) | Two-stack approach / O(1) min |

---
