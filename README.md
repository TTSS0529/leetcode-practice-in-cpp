# leetcode-practice-in-cpp
This repository is for my personal LeetCode practice using mainly C++. 

## 🎯 Training Goal

My initial target is to solve one or two problems per day. If I miss any problems during the weekdays, I will catch up on them over the weekend.(to be continued...)

# 🚀 LeetCode Training Progress

- 📅 Phase 1: 2025-06-09 - 2025-06-29 **one problem per day**
- 📅 Phase 2: 2025-06-30 - now **ten problems per week**
- ✅ Total Problems Solved: **30/31(week 4)**  
- 📈 Difficulty Breakdown: Easy(13) / Medium(15) / Hard(2) / Total(30)  
- 🧠 Topics Covered: Linked List, Array, Dynamic Programming, Stack, etc.

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
<details>

<summary>➡️➡️➡️📚 Table of Contents⬅️⬅️⬅️</summary>

- [leetcode-practice-in-cpp](#leetcode-practice-in-cpp)
  - [🎯 Training Goal](#-training-goal)
- [🚀 LeetCode Training Progress](#-leetcode-training-progress)
  - [📋 Problem Overview](#-problem-overview)
    - [📁 Folder Structure \& Usage](#-folder-structure--usage)
  - [🗂️ Problem Categories](#️-problem-categories)
    - [🔗 Linked List (Total: 5 problems)](#-linked-list-total-5-problems)
    - [🧱 Stack \& Queue (Total: 6 problems)](#-stack--queue-total-6-problems)
    - [🧩 Hash Map (Total: 4 problems)](#-hash-map-total-4-problems)
    - [🪝 Two Pointers (Total: 7 problems)](#-two-pointers-total-7-problems)
    - [🔤 String Processing (Total: 2 problems)](#-string-processing-total-2-problems)
    - [🌊 Sliding Window (Total: 1 problems)](#-sliding-window-total-1-problems)
    - [🧮 Simulation (Total: 5 problems)](#-simulation-total-5-problems)

---
</details>

## 📋 Problem Overview

### 📁 Folder Structure & Usage

Each problem is placed in its own folder, which contains:

- A `.hpp` header file for declarations  
- A `test.cpp` file for testing all versions  
- Multiple `.cpp` files, each representing a different version of the solution
- A `simple_test.hpp` and `simple_test.cpp` pair that provide common testing utilities used by `test.cpp` and solution files

To compile, just compile any solution `.cpp` together with `test.cpp` and `simple_test.cpp`.

Example:
c++ -Wall -Wextra -Werror brute_force.cpp test.cpp ../../simple_test.cpp -o test && ./test

📌 If a problem folder only contains a brute_force version, that means it's either already the best I could come up with at the time — possibly even achieving 100% runtime — or it's a reasonable enough solution for now. I’ll revisit it if I come up with a better idea or gain a deeper understanding of the problem.

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

## 🗂️ Problem Categories

### 🔗 Linked List (Total: 5 problems)

| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | [Runtime(100%)](./cpp/linked_list/0021_merge_two_sorted_lists/) | Recursive vs Iterative |
| 0086 | [Partition List](https://leetcode.com/problems/partition-list/) | Medium | [Runtime(100%)](./cpp/linked_list/0086_partition_list/) | Dummy node / In-place insertion |
| 0138 | [Copy List With Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | Medium | [Runtime(>90%,sometimes 100%)](./cpp/linked_list/0138_copy_list_with_random_pointer/) | Hash Map / In-place / O(1) extra space optimized |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | [Runtime(100%)](./cpp/linked_list/0206_reverse_linked_list/) | Tail-cutting / Recursive / Iterative |
| 0237 | [Delete Node In A Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) | Medium | [Runtime(Not 100%), good enough](./cpp/linked_list/0237_delete_node_in_a_linked_list/) | Loop-copy / O(1) overwrite |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🧱 Stack & Queue (Total: 6 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0020 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | [Runtime(100%)](./cpp/stack_queue/0020_valid_parentheses/) | Stack / Bracket matching |
| 0155 | [Min Stack](https://leetcode.com/problems/min-stack/) | Medium | [Runtime(~45% but classic, can improve later)](./cpp/stack_queue/0155_min_stack/) | Two-stack approach / O(1) min |
| 0232 | [Implement Queue Using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Easy | [Runtime(100%)](./cpp/stack_queue/0232_implement_queue_using_stacks/) | Two-stack queue / Amortized O(1) ops |
| 0295 | [Find Median From Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) | Hard | [Runtime(varies a lot)](./cpp/stack_queue/0295_find_median_from_data_stream/) | Two heaps / O(log n) insert, O(1) median |
| 0394 | [Decode String](https://leetcode.com/problems/decode-string/) | Medium | [Runtime(100%)](./cpp/stack_queue/0394_decode_string/) | Recursion & Stack / Nested string decode |
| 0946 | [Validate Stack Sequences](https://leetcode.com/problems/validate-stack-sequences/) | Medium | [Runtime(100%)](./cpp/stack_queue/0946_validate_stack_sequences/) | Simulate push/pop behavior with a real stack |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🧩 Hash Map (Total: 4 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | Easy | [Runtime(100%)](./cpp/hash_map/0205_isomorphic_strings/) | Two-way mapping / fixed array optimization |
| 0242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | [Runtime(100%)](./cpp/hash_map/0242_valid_anagram/) | Frequency counting / O(1) space |
| 0387 | [First Unique Character In A String](https://leetcode.com/problems/first-unique-character-in-a-string/) | Easy | [Runtime(~70%, can improve later)](./cpp/hash_map/0387_first_unique_character_in_a_string/) | Array or hash map / two-pass scan |
| 0409 | [Longest Palindrome](https://leetcode.com/problems/longest-palindrome/) | Easy | [Runtime(100%)](./cpp/hash_map/0409_longest_palindrome/) | Frequency counting / even part + odd center |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🪝 Two Pointers (Total: 7 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | [Runtime(100%)](./cpp/two_pointers/0003_longest_substring_without_repeating_characters/) | Sliding window (brute-force, map, array) / O(n) optimized |
| 0015 | [3Sum](https://leetcode.com/problems/3sum/) | Medium | [Runtime(~53%), classic solution](./cpp/two_pointers/0015_3sum/) | Sort + two pointers / Skip duplicates / O(n²) |
| 0142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | Medium | [Runtime(80-90%)](./cpp/two_pointers/0142_linked_list_cycle_ii/) | Fast-slow pointer to find cycle start |
| 0160 | [Intersection Of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Easy | [Runtime(~80%), classic solution](./cpp/two_pointers/0160_intersection_of_two_linked_lists/) | Two-pointer with list switching |
| 0167 | [Two Sum II Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Medium | [Runtime(100%)](./cpp/two_pointers/0167_two_sum_ii_input_array_is_sorted/) | Two-pointer / Sorted array |
| 0392 | [Is Subsequence](https://leetcode.com/problems/is-subsequence/) | Easy | [Runtime(100%)](./cpp/two_pointers/0392_is_subsequence/) | Two-pointer / String scan |
| 0876 | [Middle Of The Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | Easy | [Runtime(100%)](./cpp/two_pointers/0876_middle_of_the_linked_list/) | Fast-slow pointer on Linked List |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🔤 String Processing (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0006 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | Medium | [Runtime(100%)](./cpp/string_processing/0006_zigzag_conversion/) | Simulation + direction control + reserve optimization |
| 0151 | [Reverse Words In A String](https://leetcode.com/problems/reverse-words-in-a-string/) | Medium | [Runtime(100%)](./cpp/string_processing/0151_reverse_words_in_a_string/) | Backward scan + substr + reserve optimization |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌊 Sliding Window (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | Hard | [Runtime(~99%)](./cpp/sliding_window/0239_sliding_window_maximum/) | Monotonic deque & heap approaches |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
### 🧮 Simulation (Total: 5 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | Medium | [Runtime(100%)](./cpp/simulation/0048_rotate_image/) | Simulate 90° rotation by transpose + row reversal |
| 0054 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | Medium | [Runtime(100%)](./cpp/simulation/0054_spiral_matrix/) | Simulate matrix traversal by shrinking boundaries |
| 0059 | [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/) | Medium | [Runtime(100%)](./cpp/simulation/0059_spiral_matrix_ii/) | Simulate spiral filling using 4 dynamic boundaries |
| 0415 | [Add Strings](https://leetcode.com/problems/add-strings/) | Easy | [Runtime(100%)](./cpp/simulation/0415_add_strings/) | Simulate digit-by-digit addition / carry tracking |
| 0796 | [Rotate String](https://leetcode.com/problems/rotate-string/) | Easy | [Runtime(100%)](./cpp/simulation/0796_rotate_string/) | Simulate string rotation by manual character comparison |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
