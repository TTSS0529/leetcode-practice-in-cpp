# leetcode-practice-in-cpp
This repository is for my personal LeetCode practice using mainly C++. 

## 🎯 Training Goal

My initial target is to solve one or two problems per day. If I miss any problems during the weekdays, I will catch up on them over the weekend.(to be continued...)

# 🚀 LeetCode Training Progress

- 📅 Phase 1: 2025-06-09 - 2025-06-29 **one problem per day**
- 📅 Phase 2: 2025-06-30 - now **ten problems(min) per week**
- ✅ Total Problems Solved: **61/61(week 7)**  
- 📈 Difficulty Breakdown: Easy(21) / Medium(35) / Hard(5) / Total(61)  
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
  - [🏆 Contest Reviews](#-contest-reviews)
  - [📚 Shared Solutions](#-shared-solutions)
  - [🗂️ Problem Categories](#️-problem-categories)
    - [🔗 Linked List (Total: 5 problems)](#-linked-list-total-5-problems)
    - [🧱 Stack \& Queue (Total: 6 problems)](#-stack--queue-total-6-problems)
    - [🧩 Hash Map (Total: 4 problems)](#-hash-map-total-4-problems)
    - [🪝 Two Pointers (Total: 8 problems)](#-two-pointers-total-8-problems)
    - [🔤 String Processing (Total: 3 problems)](#-string-processing-total-3-problems)
    - [🌊 Sliding Window (Total: 1 problems)](#-sliding-window-total-1-problems)
    - [🧮 Simulation (Total: 6 problems)](#-simulation-total-6-problems)
    - [🎯 Dynamic Programming (Total: 1 problems)](#-dynamic-programming-total-1-problems)
    - [🔍 Search (Total: 3 problems)](#-search-total-3-problems)
    - [➕ Prefix Sum (Total: 1 problems)](#-prefix-sum-total-1-problems)
    - [🌳 Tree Traversal (Total: 8 problems)](#-tree-traversal-total-8-problems)
    - [🌲 Binary Search Tree (Total: 2 problems)](#-binary-search-tree-total-2-problems)
    - [🏔️ Heap / QuickSelect (Total: 1 problems)](#️-heap--quickselect-total-1-problems)
    - [🕸️ Graph \& Topological Sort (Total: 2 problems)](#️-graph--topological-sort-total-2-problems)
    - [🌀 Backtracking (Total: 5 problems)](#-backtracking-total-5-problems)
    - [📐 Math (Total: 1 problems)](#-math-total-1-problems)
    - [🌐 Flood Fill / Connected Components (Total: 1 problems)](#-flood-fill--connected-components-total-1-problems)
    - [⚡ Divide \& Conquer (Total: 2 problems)](#-divide--conquer-total-2-problems)
    - [🏗️ Design (Total: 1 problems)](#️-design-total-1-problems)

---
</details>

## 📋 Problem Overview

### 📁 Folder Structure & Usage

Each problem is placed in its own folder, which contains:

- A `.hpp` header file for declarations  
- A `test.cpp` file for testing all versions  
- Multiple `.cpp` files, each representing a different version of the solution
  - `contest.cpp`: The original code written during the contest or simulated contest
  - `brute_force.cpp`: A straightforward or initial solution outside the contest context
  - `optimized.cpp`: Improved or optimized solution
  - **`refined.cpp`**: A further **cleaned-up or more elegant version** created during later review
    - May have the **same complexity** as `brute_force.cpp` or `optimized.cpp`, but with **better readability** or slightly better runtime
- A `simple_test.hpp` and `simple_test.cpp` pair that provide common testing utilities used by `test.cpp` and solution files

To compile, just compile any solution `.cpp` together with `test.cpp` and `simple_test.cpp`.

Example:
c++ -Wall -Wextra -Werror brute_force.cpp test.cpp ../../simple_test.cpp -o test && ./test

📌 If a problem folder only contains a brute_force version, that means it's either already the best I could come up with at the time — possibly even achieving 100% runtime — or it's a reasonable enough solution for now. I’ll revisit it if I come up with a better idea or gain a deeper understanding of the problem.

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

## 🏆 Contest Reviews

You can find all contest summaries and review notes in the [contest_review.md](./contest_review.md) file.

---

## 📚 Shared Solutions

You can find all shared solution links and records in the [shared.md](./shared.md) file.

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

### 🪝 Two Pointers (Total: 8 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | [Runtime(100%)](./cpp/two_pointers/0003_longest_substring_without_repeating_characters/) | Sliding window (brute-force, map, array) / O(n) optimized |
| 0015 | [3Sum](https://leetcode.com/problems/3sum/) | Medium | [Runtime(~53%), classic solution](./cpp/two_pointers/0015_3sum/) | Sort + two pointers / Skip duplicates / O(n²) |
| 0142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | Medium | [Runtime(80-90%)](./cpp/two_pointers/0142_linked_list_cycle_ii/) | Fast-slow pointer to find cycle start |
| 0160 | [Intersection Of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Easy | [Runtime(~80%), classic solution](./cpp/two_pointers/0160_intersection_of_two_linked_lists/) | Two-pointer with list switching |
| 0167 | [Two Sum II Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Medium | [Runtime(100%)](./cpp/two_pointers/0167_two_sum_ii_input_array_is_sorted/) | Two-pointer / Sorted array |
| 0287 | [Find The Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | Medium | [Runtime(~70%) classic solution](./cpp/two_pointers/0287_find_the_duplicate_number/) | Floyd’s cycle (fast/slow) & Binary search |
| 0392 | [Is Subsequence](https://leetcode.com/problems/is-subsequence/) | Easy | [Runtime(100%)](./cpp/two_pointers/0392_is_subsequence/) | Two-pointer / String scan |
| 0876 | [Middle Of The Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | Easy | [Runtime(100%)](./cpp/two_pointers/0876_middle_of_the_linked_list/) | Fast-slow pointer on Linked List |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🔤 String Processing (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0006 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | Medium | [Runtime(100%)](./cpp/string_processing/0006_zigzag_conversion/) | Simulation + direction control + reserve optimization |
| 0008 | [String To Interger Atoi](https://leetcode.com/problems/string-to-integer-atoi/) | Medium | [Runtime(100%)](./cpp/string_processing/0008_string_to_integer_atoi/) | Manual parse + overflow clamp + long long use |
| 0151 | [Reverse Words In A String](https://leetcode.com/problems/reverse-words-in-a-string/) | Medium | [Runtime(100%)](./cpp/string_processing/0151_reverse_words_in_a_string/) | Backward scan + substr + reserve optimization |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌊 Sliding Window (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | Hard | [Runtime(~99%)](./cpp/sliding_window/0239_sliding_window_maximum/) | Monotonic deque & heap approaches |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
### 🧮 Simulation (Total: 6 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | Medium | [Runtime(100%)](./cpp/simulation/0048_rotate_image/) | Simulate 90° rotation by transpose + row reversal |
| 0054 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | Medium | [Runtime(100%)](./cpp/simulation/0054_spiral_matrix/) | Simulate matrix traversal by shrinking boundaries |
| 0059 | [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/) | Medium | [Runtime(100%)](./cpp/simulation/0059_spiral_matrix_ii/) | Simulate spiral filling using 4 dynamic boundaries |
| 0415 | [Add Strings](https://leetcode.com/problems/add-strings/) | Easy | [Runtime(100%)](./cpp/simulation/0415_add_strings/) | Simulate digit-by-digit addition / carry tracking |
| 0796 | [Rotate String](https://leetcode.com/problems/rotate-string/) | Easy | [Runtime(100%)](./cpp/simulation/0796_rotate_string/) | Simulate string rotation by manual character comparison |
| 3602 | [Hexadecimal And Hexatrigesimal Conversion](https://leetcode.com/problems/hexadecimal-and-hexatrigesimal-conversion/) | Easy | [Runtime(100%)](./cpp/simulation/3602_hexadecimal_and_hexatrigesimal_conversion/) | Simulate base conversion with custom digit set / 🏁 Biweekly 160(Q1) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🎯 Dynamic Programming (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 3603 | [Minimum Cost Path With Alternating Direction II](https://leetcode.com/problems/minimum-cost-path-with-alternating-directions-ii/) | Medium | [Runtime(~95%) improve later](./cpp/dynamic_programming/3603_minimum_cost_path_with_alternating_direction_ii/) | Grid DP with custom movement rule / 🏁 Biweekly 160(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🔍 Search (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0154 | [Find Minimum In Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) | Hard | [Runtime(100%)](./cpp/search/0154_find_minimum_in_rotated_sorted_array_ii/) | Binary Search with Duplicates |
| 0278 | [First Bad Version](https://leetcode.com/problems/first-bad-version/) | Easy | [Runtime(~55%) classic solution](./cpp/search/0278_first_bad_version/) | Find first `true` with minimal API calls / Lower Bound |
| 0704 | [Binary Search](https://leetcode.com/problems/binary-search/) | Easy | [Runtime(100%)](./cpp/search/0704_binary_search/) | Classic binary search on sorted array |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### ➕ Prefix Sum (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | Easy | [Runtime(100%)](./cpp/prefix_sum/0724_find_pivot_index/) | Compare left and right prefix sum |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌳 Tree Traversal (Total: 8 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0101_symmetric_tree/) | DFS recursion & BFS queue mirror check |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Medium | [Runtime(100%)](./cpp/tree_traversal/0102_binary_tree_level_order_traversal/) | BFS using queue |
| 0103 | [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | Medium | [Runtime(100%)](./cpp/tree_traversal/0103_binary_tree_zigzag_level_order_traversal/) | BFS with alternating direction |
| 0104 | [Maximum Depth Of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0104_maximum_depth_of_binary_tree/) | DFS recursion & BFS level count |
| 0110 | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0110_balanced_binary_tree/) | DFS + pruning, early exit on unbalanced |
| 0113 | [Path Sum II](https://leetcode.com/problems/path-sum-ii/) | Medium | [Runtime(100%)](./cpp/tree_traversal/0113_path_sum_ii/) | DFS + Backtracking |
| 0226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0226_invert_binary_tree/) | DFS recursion & BFS swap children |
| 0236 | [Lowest Common Ancestor Of A Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | Medium | [Runtime(~60%) classic solution](./cpp/tree_traversal/0236_lowest_common_ancestor_of_a_binary_tree/) | Post-order recursion (LCA logic) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌲 Binary Search Tree (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0230 | [Kth Smallest Element In A BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | Medium | [Runtime(100%)](./cpp/binary_search_tree/0230_kth_smallest_element_in_a_bst/) | In-order traversal + pruning |
| 0235 | [Lowest Common Ancestor Of A Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | Medium | [Runtime(~88%) classic solution](./cpp/binary_search_tree/0235_lowest_common_ancestor_of_a_binary_search_tree/) | Top-down search using BST property |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🏔️ Heap / QuickSelect (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0215 | [Kth Largest Element In An Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Medium | [Runtime(>90%)](./cpp/heap_quickselect/0215_kth_largest_element_in_an_array/) | heap vs quick select |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🕸️ Graph & Topological Sort (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | Medium | [Runtime(79%-100%)](./cpp/graph_topological_sort/0207_course_schedule/) | Cycle detection, DAG check |
| 3620 | [Network Recovery Pathways](https://leetcode.com/problems/network-recovery-pathways/) | Hard | [Runtime(>90%)](./cpp/graph_topological_sort/3620_network_recovery_pathways/) | DAG shortest path + topo sort + binary search / / 🏁 Biweekly 161(Q3) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌀 Backtracking (Total: 5 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0039 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | Medium | [Runtime(sometimes 100%)](./cpp/backtracking/0039_combination_sum/) | Reuse numbers → `sort + prune if > target`, prevent duplicates via `start` |
| 0040 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | Medium | [Runtime(100%)](./cpp/backtracking/0040_combination_sum_ii/) | Use each number once → `sort + prune + skip duplicates (i > start)` |
| 0046 | [Permutation](https://leetcode.com/problems/permutations/) | Medium | [Runtime(100%)](./cpp/backtracking/0046_permutations/) | Generate all permutations, `used[] + path` (fast) vs `swap` (less memory) |
| 0047 | [Permutation II](https://leetcode.com/problems/permutations-ii/) | Medium | [Runtime(~75%), classic solution](./cpp/backtracking/0047_permutations_ii/) | Same as 46 but **with duplicates** → `sort + skip !used[i-1]` to prune |
| 0079 | [Word Search](https://leetcode.com/problems/word-search/) | Medium | [Runtime(98%)](./cpp/backtracking/0079_word_search/) | DFS + backtracking on 2D grid, prune by length & char frequency, in-place visited mark |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 📐 Math (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 3618 | [Split Array By Prime Indices](https://leetcode.com/problems/split-array-by-prime-indices/) | Medium | [Runtime(>70%) classic solution](./cpp/math/3618_split_array_by_prime_indices/) | Number theory + sieve of Eratosthenes / 🏁 Biweekly 161(Q1) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌐 Flood Fill / Connected Components (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 3619 | [Count Islands With Total Value Divisible By K](https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/) | Medium | [Runtime(~90%) classic solution](./cpp/flood_fill_connected_components/3619_count_islands_with_total_value_divisible_by_k/) | Flood fill via DFS and BFS comparison / 🏁 Biweekly 161(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### ⚡ Divide & Conquer (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0050 | [Pow(x,n)](https://leetcode.com/problems/powx-n/) | Medium | [Runtime(100%)](./cpp/divide_conquer/0050_pow_x_n/) | Fast exponentiation, O(log n) optimization |
| 0105 | [Construct Binary Tree From Preorder And Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | Medium | [Runtime(100%)](./cpp/divide_conquer/0105_construct_binary_tree_from_preorder_and_inorder_traversal/) | Recursively split inorder, build subtrees |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🏗️ Design (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0297 | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | Hard | [Runtime(~30%) improve later](./cpp/design/0297_serialize_and_deserialize_binary_tree/) | Preorder DFS + `#` null marker, `istringstream` token parsing |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
