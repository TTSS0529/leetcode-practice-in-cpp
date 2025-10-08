# leetcode-practice-in-cpp
This repository is for my personal LeetCode practice using mainly C++.

## 🎯 Training Goal

My initial target is to solve one or two problems per day. If I miss any problems during the weekdays, I will catch up on them over the weekend.(to be continued...)

# 🚀 LeetCode Training Progress

- 📅 Phase 1: 2025-06-09 - 2025-06-29 **one problem per day**
- 📅 Phase 2: 2025-06-30 - 2025-08-24 **ten problems(min) per week**
- 📅 Phase 3: 2025-08-25 - now **seven problems(min) per week**
- ✅ Total Problems Solved: **160/162(week 18)**
- 📈 Difficulty Breakdown: Easy(42) / Medium(101) / Hard(17) / Total(160)
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
    - [🌀 Backtracking (Total: 12 problems)](#-backtracking-total-12-problems)
    - [🌲 Binary Search Tree (Total: 4 problems)](#-binary-search-tree-total-4-problems)
    - [🔧 Bit Manipulation (Total: 5 problems)](#-bit-manipulation-total-5-problems)
    - [🏗️ Design (Total: 1 problems)](#️-design-total-1-problems)
    - [⚡ Divide \& Conquer (Total: 2 problems)](#-divide--conquer-total-2-problems)
    - [🎯 Dynamic Programming (Total: 27 problems)](#-dynamic-programming-total-27-problems)
    - [🌐 Flood Fill / Connected Components (Total: 6 problems)](#-flood-fill--connected-components-total-6-problems)
    - [🕸️ Graph \& Topological Sort (Total: 3 problems)](#️-graph--topological-sort-total-3-problems)
    - [🧭 Greedy (Total: 16 problems)](#-greedy-total-16-problems)
    - [🧩 Hash Map (Total: 5 problems)](#-hash-map-total-5-problems)
    - [🏔️ Heap / QuickSelect / Bucket (Total: 3 problems)](#️-heap--quickselect--bucket-total-3-problems)
    - [🔗 Linked List (Total: 5 problems)](#-linked-list-total-5-problems)
    - [📐 Math (Total: 8 problems)](#-math-total-8-problems)
    - [➕ Prefix Sum (Total: 3 problems)](#-prefix-sum-total-3-problems)
    - [🔍 Search (Total: 13 problems)](#-search-total-13-problems)
    - [🛣️ Shortest Path (Total: 2 problems)](#️-shortest-path-total-2-problems)
    - [🧮 Simulation (Total: 7 problems)](#-simulation-total-7-problems)
    - [🌊 Sliding Window (Total: 3 problems)](#-sliding-window-total-3-problems)
    - [🧱 Stack \& Queue (Total: 6 problems)](#-stack--queue-total-6-problems)
    - [🔤 String Processing (Total: 3 problems)](#-string-processing-total-3-problems)
    - [💡 Tree DP / Path Sum (Total: 2 problems)](#-tree-dp--path-sum-total-2-problems)
    - [🌳 Tree Traversal (Total: 9 problems)](#-tree-traversal-total-9-problems)
    - [🪝 Two Pointers (Total: 14 problems)](#-two-pointers-total-14-problems)

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

### 🌀 Backtracking (Total: 12 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0017 | [Letter Combinations Of A Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | Medium | [Runtime(100%)](./cpp/backtracking/0017_letter_combinations_of_a_phone_number/) | Classic digit-to-letter mapping → DFS/backtracking |
| 0022 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | Medium | [Runtime(100%)](./cpp/backtracking/0022_generate_parentheses/) | Backtracking with pruning → track left/right counts, reserve string capacity |
| 0037 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | Hard | [Runtime(~94%)](./cpp/backtracking/0037_sudoku_solver/) | Backtracking with pruning: **Brute-force** uses `unordered_set`; **Optimized** uses bitmask (`int row[9], col[9], block[9]`) + `__builtin_ctz` to pick candidates efficiently |
| 0039 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | Medium | [Runtime(sometimes 100%)](./cpp/backtracking/0039_combination_sum/) | Reuse numbers → `sort + prune if > target`, prevent duplicates via `start` |
| 0040 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | Medium | [Runtime(100%)](./cpp/backtracking/0040_combination_sum_ii/) | Use each number once → `sort + prune + skip duplicates (i > start)` |
| 0046 | [Permutation](https://leetcode.com/problems/permutations/) | Medium | [Runtime(100%)](./cpp/backtracking/0046_permutations/) | Generate all permutations, `used[] + path` (fast) vs `swap` (less memory) |
| 0047 | [Permutation II](https://leetcode.com/problems/permutations-ii/) | Medium | [Runtime(~75%), classic solution](./cpp/backtracking/0047_permutations_ii/) | Same as 46 but **with duplicates** → `sort + skip !used[i-1]` to prune |
| 0051 | [N Queens](https://leetcode.com/problems/n-queens/) | Hard | [Runtime(100%)](./cpp/backtracking/0051_n_queens/) | Place queens row-by-row, prune with `colUsed`, `diag1Used`, `diag2Used` for O(1) validity check |
| 0077 | [Combinations](https://leetcode.com/problems/combinations/) | Medium | [Runtime(~90%)](./cpp/backtracking/0077_combinations/) | Generate all k-combinations from 1..n → backtracking, use `path` and `i+1` for next start |
| 0078 | [Subsets](https://leetcode.com/problems/subsets/) | Medium | [Runtime(100%)](./cpp/backtracking/0078_subsets/) | Generate all subsets → Backtracking (DFS) or Bit Manipulation, use `path` and recursion for DFS |
| 0079 | [Word Search](https://leetcode.com/problems/word-search/) | Medium | [Runtime(98%)](./cpp/backtracking/0079_word_search/) | DFS + backtracking on 2D grid, prune by length & char frequency, in-place visited mark |
| 0131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | Medium | [Runtime(~94%) improve later](./cpp/backtracking/0131_palindrome_partitioning/) | Backtracking + DP precomputation for O(1) palindrome check |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌲 Binary Search Tree (Total: 4 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0098 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) | Medium | [Runtime(100%)](./cpp/binary_search_tree/0098_validate_binary_search_tree/) | In-order traversal OR Recursive bounds check |
| 0108 | [Convert Sorted Array To Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) | Easy | [sometimes Runtime(100%)](./cpp/binary_search_tree/0108_convert_sorted_array_to_binary_search_tree/) | Divide & Conquer + Recursion |
| 0230 | [Kth Smallest Element In A BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | Medium | [Runtime(100%)](./cpp/binary_search_tree/0230_kth_smallest_element_in_a_bst/) | In-order traversal + pruning |
| 0235 | [Lowest Common Ancestor Of A Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | Medium | [Runtime(~88%) classic solution](./cpp/binary_search_tree/0235_lowest_common_ancestor_of_a_binary_search_tree/) | Top-down search using BST property |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🔧 Bit Manipulation (Total: 5 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0136 | [Single Number](https://leetcode.com/problems/single-number/) | Easy | [Runtime(100%)](./cpp/bit_manipulation/0136_single_number/) | XOR all numbers → duplicates cancel out, leaving unique |
| 0137 | [Single Number II](https://leetcode.com/problems/single-number-ii/) | Medium | [Runtime(100%)](./cpp/bit_manipulation/0137_single_number_ii/) | Bit counting mod 3 / find unique appearing once when others appear three times |
| 0191 | [Number Of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | Easy | [Runtime(100%)](./cpp/bit_manipulation/0191_number_of_1_bits/) | Brian Kernighan’s algorithm / count set bits |
| 0231 | [Power Of Two](https://leetcode.com/problems/power-of-two/) | Easy | [Runtime(100%)](./cpp/bit_manipulation/0231_power_of_two/) | `n & (n - 1) == 0` trick / check single set bit |
| 0371 | [Sum Of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | Medium | [Runtime(100%)](./cpp/bit_manipulation/0371_sum_of_two_integers/) | XOR for sum without carry & `(a & b) << 1` carry |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🏗️ Design (Total: 1 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0297 | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | Hard | [Runtime(~30%) improve later](./cpp/design/0297_serialize_and_deserialize_binary_tree/) | Preorder DFS + `#` null marker, `istringstream` token parsing |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### ⚡ Divide & Conquer (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0050 | [Pow(x,n)](https://leetcode.com/problems/powx-n/) | Medium | [Runtime(100%)](./cpp/divide_conquer/0050_pow_x_n/) | Fast exponentiation, O(log n) optimization |
| 0105 | [Construct Binary Tree From Preorder And Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | Medium | [Runtime(100%)](./cpp/divide_conquer/0105_construct_binary_tree_from_preorder_and_inorder_traversal/) | Recursively split inorder, build subtrees |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🎯 Dynamic Programming (Total: 27 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0010 | [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/) | Hard | [Runtime(~52%) classic solution](./cpp/dynamic_programming/0010_regular_expression_matching/) | 2D DP → simulate regex with `.` and `*`, careful initialization and transitions |
| 0053 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0053_maximum_subarray/) | Kadane’s Algorithm → O(n) time, O(1) space |
| 0064 | [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0064_minimum_path_sum/) | Grid DP → can optimize to O(n) space with rolling array(later) |
| 0070 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Easy | [Runtime(100%)](./cpp/dynamic_programming/0070_climbing_stairs/) | Fibonacci variant with safe integer handling |
| 0072 | [Edit Distance](https://leetcode.com/problems/edit-distance/) | Medium | [Runtime(>70%)](./cpp/dynamic_programming/0072_edit_distance/) | 2D DP → `dp[i][j]` = min ops to convert prefix of word1→word2; handles insert/delete/replace |
| 0091 | [Decode Ways](https://leetcode.com/problems/decode-ways/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0091_decode_ways/) | DP → `dp[i]` = ways to decode `s[0..i-1]`; careful handling of `0` and two-digit numbers (`10..26`) |
| 0118 | [Pascals Triangle](https://leetcode.com/problems/pascals-triangle/) | Easy | [Runtime(100%)](./cpp/dynamic_programming/0118_pascals_triangle/) | Generate triangle row by row → `row[j] = prev_row[j-1] + prev_row[j]`, edge 1’s |
| 0121 | [Best Time To Buy And Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | [Runtime(sometimes 100%)](./cpp/dynamic_programming/0121_best_time_to_buy_and_sell_stock/) | Track prefix min & update max profit in one pass |
| 0123 | [Best Time To Buy And Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) | Hard | [Runtime(sometimes 100%)](./cpp/dynamic_programming/0123_best_time_to_buy_and_sell_stock_iii/) | Two approaches: left-right profit split (O(n) space) or 4-state DP (O(1) space) |
| 0139 | [Word Break](https://leetcode.com/problems/word-break/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0139_word_break/) | DP → `dp[i]` = whether `s[0..i-1]` can be segmented; check all words ending at `i` |
| 0188 | [Best Time To Buy And Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/) | Hard | [Runtime(~85%)](./cpp/dynamic_programming/0188_best_time_to_buy_and_sell_stock_iv/) | State DP → buy[i], sell[i] for k transactions; optimize from 2D DP to O(k) space |
| 0198 | [House Robber](https://leetcode.com/problems/house-robber/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0198_house_robber/) | Classic DP → `dp[i] = max(dp[i-1], dp[i-2] + nums[i])` → O(1) space optimized |
| 0213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0213_house_robber_ii/) | Circular variant of 0198 → run twice on `[0,n-2]` & `[1,n-1]`, then max |
| 0221 | [Maximal Square](https://leetcode.com/problems/maximal-square/) | Medium | [Runtime(vary a lot)](./cpp/dynamic_programming/0221_maximal_square/) | 2D DP → `dp[i][j]` stores maximal square side ending at `(i,j)` → depends on top, left, top-left neighbors → can optimize to O(n) space |
| 0279 | [Perfect Squares](https://leetcode.com/problems/perfect-squares/) | Medium | [Runtime(~86%)](./cpp/dynamic_programming/0279_perfect_squares/) | Complete knapsack DP → `dp[i] = min(dp[i], dp[i - j²] + 1)` |
| 0264 | [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0264_ugly_number_ii/) | DP + 3 pointers → generate sequence by merging ×2,×3,×5 |
| 0300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0300_longest_increasing_subsequence/) | Patience Sorting + Binary Search → O(n log n) |
| 0309 | [Best Time To Buy And Sell Stock With Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0309_best_time_to_buy_and_sell_stock_with_cooldown/) | State-machine DP → `hold / cool / rest` states; enforces 1-day cooldown |
| 0322 | [Coin Change](https://leetcode.com/problems/coin-change/) | Medium | [Runtime(~82%)](./cpp/dynamic_programming/0322_coin_change/) | 1D DP (Unbounded Knapsack) → `dp[j] = min(dp[j], dp[j - coin] + 1)`, handle impossible states with `INT_MAX-1` |
| 0413 | [Arithmetic Slices](https://leetcode.com/problems/arithmetic-slices/) | Medium | [Runtime(100%)](./cpp/dynamic_programming/0413_arithmetic_slices/) | DP → `dp[i] = dp[i-1] + 1` if valid, sum(dp) for answer |
| 0416 | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | Medium | [Runtime(~80%)](./cpp/dynamic_programming/0416_partition_equal_subset_sum/) | 0/1 Knapsack DP → `dp[j] |= dp[j-num]`; backward iteration prevents reuse |
| 0474 | [Ones And Zeros](https://leetcode.com/problems/ones-and-zeroes/) | Medium | [Runtime(~82%)](./cpp/dynamic_programming/0474_ones_and_zeros/) | 2D 0/1 Knapsack → `dp[i][j]` max strings with i zeros & j ones; iterate backwards to avoid reuse |
| 0509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | Easy | [Runtime(sometimes 100%)](./cpp/dynamic_programming/0509_fibonacci_number/) | Classic DP → optimized to rolling variables |
| 0542 | [01 Matrix](https://leetcode.com/problems/01-matrix/) | Medium | [Runtime(~90%)](./cpp/dynamic_programming/0542_01_matrix/) | 2-pass DP → compute min distance to nearest 0 (top-left to bottom-right, then reverse) |
| 0583 | [Delete Operation For Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/) | Medium | [Runtime(65~90%)](./cpp/dynamic_programming/0583_delete_operation_for_two_strings/) | 2D DP → LCS length → min deletions = len1 + len2 - 2*LCS; can optimize to O(n) space with rolling array |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | Medium | [Runtime(vary a lot) classic solution](./cpp/dynamic_programming/1143_longest_common_subsequence/) | Classic LCS → 2D DP; `dp[i][j]` = LCS of prefixes; can optimize to O(min(m,n)) space |
| 3603 | [Minimum Cost Path With Alternating Direction II](https://leetcode.com/problems/minimum-cost-path-with-alternating-directions-ii/) | Medium | [Runtime(~95%) improve later](./cpp/dynamic_programming/3603_minimum_cost_path_with_alternating_direction_ii/) | Grid DP with custom movement rule / 🏁 Biweekly 160(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌐 Flood Fill / Connected Components (Total: 6 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0130 | [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/) | Medium | [Runtime(100%)](./cpp/flood_fill_connected_components/0130_surrounded_regions/) | DFS with temporary marking + revert step |
| 0417 | [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/) | Medium | [Runtime(sometimes 100%)](./cpp/flood_fill_connected_components/0417_pacific_atlantic_water_flow/) | Reverse flood fill from oceans / DFS |
| 0547 | [Number Of Provinces](https://leetcode.com/problems/number-of-provinces/) | Medium | [Runtime(100%)](./cpp/flood_fill_connected_components/0547_number_of_provinces/) | Connected components in adjacency matrix / DFS |
| 0695 | [Max Area Of Island](https://leetcode.com/problems/max-area-of-island/) | Medium | [Runtime(100%)](./cpp/flood_fill_connected_components/0695_max_area_of_island/) | Classic flood fill / DFS variants |
| 0934 | [Shortest Bridge](https://leetcode.com/problems/shortest-bridge/) | Medium | [Runtime(vary a lot)](./cpp/flood_fill_connected_components/0934_shortest_bridge/) | Hybrid DFS + BFS: mark one island, expand to find shortest bridge |
| 3619 | [Count Islands With Total Value Divisible By K](https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/) | Medium | [Runtime(~90%) classic solution](./cpp/flood_fill_connected_components/3619_count_islands_with_total_value_divisible_by_k/) | Flood fill via DFS and BFS comparison / 🏁 Biweekly 161(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🕸️ Graph & Topological Sort (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | Medium | [Runtime(79%-100%)](./cpp/graph_topological_sort/0207_course_schedule/) | Cycle detection, DAG check |
| 0310 | [Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/) | Medium | [Runtime(~60%)](./cpp/graph_topological_sort/0310_minimum_height_trees/) | Trim leaves iteratively, tree centers |
| 3620 | [Network Recovery Pathways](https://leetcode.com/problems/network-recovery-pathways/) | Hard | [Runtime(>90%)](./cpp/graph_topological_sort/3620_network_recovery_pathways/) | DAG shortest path + topo sort + binary search / / 🏁 Biweekly 161(Q3) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🧭 Greedy (Total: 16 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0011 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Medium | [Runtime(sometimes 100%)](./cpp/greedy/0011_container_with_most_water/) | Two pointers with greedy: always move the shorter line |
| 0122 | [Best Time To Buy And Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | Medium | [Runtime(100%)](./cpp/greedy/0122_best_time_to_buy_and_sell_stock_ii/) | Greedy → accumulate all positive price differences |
| 0135 | [Candy](https://leetcode.com/problems/candy/) | Hard | [Runtime(100%)](./cpp/greedy/0135_candy/) | Greedy + two-pass scan: take `max(left[i], right[i])` |
| 0169 | [Majority Element](https://leetcode.com/problems/majority-element/) | Easy | [Runtime(100%)](./cpp/greedy/0169_majority_element/) | Boyer-Moore Voting: greedy cancellation of minority elements |
| 0179 | [Largest Number](https://leetcode.com/problems/largest-number/) | Medium | [Runtime(~77%), classic solution](./cpp/greedy/0179_largest_number/) | Greedy + custom sorting: sort by `a + b > b + a` |
| 0406 | [Queue Reconstruction By Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | Medium | [Runtime(~71%) improve later](./cpp/greedy/0406_queue_reconstruction_by_height/) | Greedy + sort by descending height, insert each person at index `k`; segment tree can optimize to O(n log n) |
| 0435 | [Non_Overlapping_Intervals](https://leetcode.com/problems/non-overlapping-intervals/) | Medium | [Runtime(~73%) classic solution](./cpp/greedy/0435_non_overlapping_intervals/) | Greedy + sorting by end time: always keep the interval that ends earliest |
| 0452 | [Minimum Number Of Arrows To Burst Ballons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | Medium | [Runtime(~32%) classic solution](./cpp/greedy/0452_minimum_number_of_arrows_to_burst_ballons/) | Greedy + sorting by end time: shoot arrows at earliest possible `end` |
| 0455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | Easy | [Runtime(sometimes 100%)](./cpp/greedy/0455_assign_cookies/) | Greedy + two pointers after sorting: assign smallest possible cookie to each child |
| 0605 | [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | Easy | [Runtime(100%)](./cpp/greedy/0605_can_place_flowers/) | Greedy: check left/right neighbors, plant if both empty, early stop if `n == 0` |
| 0646 | [Maximum Length Of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/) | Medium | [Runtime(80-90%)](./cpp/greedy/0646_maximum_length_of_pair_chain/) | Greedy: sort by pair end, always pick next pair with start > previous end |
| 0665 | [Non Decreasing Array](https://leetcode.com/problems/non-decreasing-array/) | Medium | [Runtime(100%)](./cpp/greedy/0665_non_decreasing_array/) | Greedy: allow at most one violation, fix locally by lowering `nums[i]` or raising `nums[i+1]` |
| 0763 | [Partition Labels](https://leetcode.com/problems/partition-labels/) | Medium | [Runtime(100%)](./cpp/greedy/0763_partition_labels/) | Greedy + last occurrence: expand partition until reaching farthest boundary |
| 0768 | [Max Chunks To Make Sorted II](https://leetcode.com/problems/max-chunks-to-make-sorted-ii/) | Hard | [Runtime(100%)](./cpp/greedy/0768_max_chunks_to_make_sorted_ii/) | Greedy + monotonic stack: track max of each chunk, merge when `arr[i] < stack.top()` |
| 3635 | [Earlies Finish Time For Land And Water Rides II](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/) | Medium | [Runtime(~83%), classic solution](./cpp/greedy/3635_earlies_finish_time_for_land_and_water_rides_ii/) | Greedy on earliest finish time in both orders (land→water / water→land) / 🏁 Biweekly 162(Q3) |
| 3664 | [Two-Letter Card Game](https://leetcode.com/problems/two-letter-card-game/) | Medium | [Runtime varies, classic solution](./cpp/greedy/3664_two_letter_card_game/) | Count cards by categories and use greedy pairing with leftovers (`both`, `left`, `right`) / 🏁 Biweekly 164(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🧩 Hash Map (Total: 5 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | [Runtime(100%)](./cpp/hash_map/0001_two_sum/) | One-pass hash map / complement lookup |
| 0205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | Easy | [Runtime(100%)](./cpp/hash_map/0205_isomorphic_strings/) | Two-way mapping / fixed array optimization |
| 0242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | [Runtime(100%)](./cpp/hash_map/0242_valid_anagram/) | Frequency counting / O(1) space |
| 0387 | [First Unique Character In A String](https://leetcode.com/problems/first-unique-character-in-a-string/) | Easy | [Runtime(~70%, can improve later)](./cpp/hash_map/0387_first_unique_character_in_a_string/) | Array or hash map / two-pass scan |
| 0409 | [Longest Palindrome](https://leetcode.com/problems/longest-palindrome/) | Easy | [Runtime(100%)](./cpp/hash_map/0409_longest_palindrome/) | Frequency counting / even part + odd center |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🏔️ Heap / QuickSelect / Bucket (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0215 | [Kth Largest Element In An Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Medium | [Runtime(>90%)](./cpp/heap_quickselect_bucket/0215_kth_largest_element_in_an_array/) | heap vs quick select |
| 0347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Medium | [Runtime(100%)](./cpp/heap_quickselect_bucket/0347_top_k_frequent_elements/) | bucket sort vs quick select |
| 0451 | [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | Medium | [Runtime(sometimes 100%)](./cpp/heap_quickselect_bucket/0451_sort_characters_by_frequency/) | bucket sort |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

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

### 📐 Math (Total: 8 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0089 | [Gray Code](https://leetcode.com/problems/gray-code/) | Medium | [Runtime(100%)](./cpp/math/0089_gray_code/) | Generate Gray codes using `i ^ (i >> 1)` formula |
| 0233 | [Number Of Digit One](https://leetcode.com/problems/number-of-digit-one/) | Hard | [Runtime(100%)](./cpp/math/0233_number_of_digit_one/) | Digit counting by high/cur/low parts per digit |
| 0343 | [Integer Break](https://leetcode.com/problems/integer-break/) | Medium | [Runtime(100%)](./cpp/math/0343_integer_break/) | Break `n` into as many `3`s as possible; handle mod=1 by turning `3+1`→`2+2` |
| 0400 | [Nth Digit](https://leetcode.com/problems/nth-digit/) | Medium | [Runtime(100%)](./cpp/math/0400_nth_digit/) | Digit block skipping → locate number & digit |
| 0650 | [2 Keys Keyboard](https://leetcode.com/problems/2-keys-keyboard/) | Medium | [Runtime(100%)](./cpp/math/0650_2_keys_keyboard/) | Min steps = sum of prime factors of `n` |
| 1823 | [Find The Winner Of The Circular Game](https://leetcode.com/problems/find-the-winner-of-the-circular-game/) | Medium | [Runtime(100%)](./cpp/math/1823_find_the_winner_of_the_circular_game/) | Josephus problem — recurrence: `dp = (dp + k) % i` |
| 3618 | [Split Array By Prime Indices](https://leetcode.com/problems/split-array-by-prime-indices/) | Medium | [Runtime(>70%) classic solution](./cpp/math/3618_split_array_by_prime_indices/) | Number theory + sieve of Eratosthenes / 🏁 Biweekly 161(Q1) |
| 3648 | [Minimum Sensors To Cover Grid](https://leetcode.com/problems/minimum-sensors-to-cover-grid/) | Medium | [Runtime(100%)](./cpp/math/3648_minimum_sensors_to_cover_grid/) | Coverage square side = `2k+1`; ceil-div in both dims / 🏁 Biweekly 163(Q1) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### ➕ Prefix Sum (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0238 | [Product Of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | [Runtime(100%)](./cpp/prefix_sum/0238_product_of_array_except_self/) | Prefix product (left) × suffix product (right) without division |
| 0724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | Easy | [Runtime(100%)](./cpp/prefix_sum/0724_find_pivot_index/) | Compare left and right prefix sum |
| 1480 | [Running Sum Of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) | Easy | [Runtime(100%)](./cpp/prefix_sum/1480_running_sum_of_1d_array/) | Basic prefix sum building cumulatively |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🔍 Search (Total: 13 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0004 | [Median Of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard | [Runtime(100%)](./cpp/search/0004_median_of_two_sorted_arrays/) | Binary search on partition of shorter array → O(log(min(m,n))) |
| 0033 | [Search In Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Medium | [Runtime(100%)](./cpp/search/0033_search_in_rotated_sorted_array/) | Binary search with rotation awareness → O(log n) |
| 0034 | [Find First And Last Position Of Element In Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Medium | [Runtime(100%)](./cpp/search/0034_find_first_and_last_position_of_element_in_sorted_array/) | Two binary searches to find left and right boundaries → O(log n) |
| 0035 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | [Runtime(100%)](./cpp/search/0035_search_insert_position/) | Lower Bound implementation → O(log n) |
| 0069 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Easy | [Runtime(100%)](./cpp/search/0069_sqrt_x/) | Binary search for integer square root → O(log n) |
| 0074 | [Search A 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | Medium | [Runtime(100%)](./cpp/search/0074_search_a_2d_matrix/) | Treat matrix as 1D array + binary search → O(log(m·n)) |
| 0081 | [Search In Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | Medium | [Runtime(100%)](./cpp/search/0081_search_in_rotated_sorted_array_ii/) | Binary search with rotation + duplicates → O(n) worst case |
| 0153 | [Find Minimum In Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Medium | [Runtime(100%)](./cpp/search/0153_find_minimum_in_rotated_sorted_array/) | Binary search for rotation pivot → O(log n) |
| 0154 | [Find Minimum In Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) | Hard | [Runtime(100%)](./cpp/search/0154_find_minimum_in_rotated_sorted_array_ii/) | Binary Search with Duplicates |
| 0240 | [Search A 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) | Medium | [Runtime(vary a lot), classic solution](./cpp/search/0240_search_a_2d_matrix_ii/) | Monotonic matrix search from top-right corner → O(m+n) |
| 0278 | [First Bad Version](https://leetcode.com/problems/first-bad-version/) | Easy | [Runtime(~55%) classic solution](./cpp/search/0278_first_bad_version/) | Find first `true` with minimal API calls / Lower Bound |
| 0540 | [Single Element In A Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | Medium | [Runtime(100%)](./cpp/search/0540_single_element_in_a_sorted_array/) | Binary search with pair index check → O(log n) |
| 0704 | [Binary Search](https://leetcode.com/problems/binary-search/) | Easy | [Runtime(100%)](./cpp/search/0704_binary_search/) | Classic binary search on sorted array |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🛣️ Shortest Path (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0126 | [Word Ladder II](https://leetcode.com/problems/word-ladder-ii/) | Hard | [Runtime(~45%)](./cpp/shortest_path/0126_word_ladder_ii/) | BFS to find shortest depth + backtracking to reconstruct all shortest paths |
| 3650 | [Minimum Cost Path With Edge Reversals](https://leetcode.com/problems/minimum-cost-path-with-edge-reversals/) | Medium | [Runtime(~95%)](./cpp/shortest_path/3650_minimum_cost_path_with_edge_reversals/) | Model each edge as two directed edges (original cost and 2× cost for reversal) and solve with Dijkstra / 🏁 Biweekly 163(Q3) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🧮 Simulation (Total: 7 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | Medium | [Runtime(100%)](./cpp/simulation/0048_rotate_image/) | Simulate 90° rotation by transpose + row reversal |
| 0054 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | Medium | [Runtime(100%)](./cpp/simulation/0054_spiral_matrix/) | Simulate matrix traversal by shrinking boundaries |
| 0059 | [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/) | Medium | [Runtime(100%)](./cpp/simulation/0059_spiral_matrix_ii/) | Simulate spiral filling using 4 dynamic boundaries |
| 0415 | [Add Strings](https://leetcode.com/problems/add-strings/) | Easy | [Runtime(100%)](./cpp/simulation/0415_add_strings/) | Simulate digit-by-digit addition / carry tracking |
| 0796 | [Rotate String](https://leetcode.com/problems/rotate-string/) | Easy | [Runtime(100%)](./cpp/simulation/0796_rotate_string/) | Simulate string rotation by manual character comparison |
| 3602 | [Hexadecimal And Hexatrigesimal Conversion](https://leetcode.com/problems/hexadecimal-and-hexatrigesimal-conversion/) | Easy | [Runtime(100%)](./cpp/simulation/3602_hexadecimal_and_hexatrigesimal_conversion/) | Simulate base conversion with custom digit set / 🏁 Biweekly 160(Q1) |
| 3633 | [Earlies Finish Time For Land And Water Rides I](https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/) | Easy | [Runtime(20%), better solution in 3635](./cpp/simulation/3633_earlies_finish_time_for_land_and_water_rides_i/) | Brute-force simulate both orders (land→water / water→land) / 🏁 Biweekly 162(Q1) |
| 3663 | [Find The Least Frequent Digit](https://leetcode.com/problems/find-the-least-frequent-digit/) | Easy | [Runtime(100%)](./cpp/simulation/3663_find_the_least_frequent_digit/) | Counting digits / 🏁 Biweekly 164(Q1) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌊 Sliding Window (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0076 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | Hard | [Runtime(100%)](./cpp/sliding_window/0076_minimum_window_substring/) | Classic sliding window with char count & shrink |
| 0239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | Hard | [Runtime(~99%)](./cpp/sliding_window/0239_sliding_window_maximum/) | Monotonic deque & heap approaches |
| 3634 | [Minimum Removals To Balance Array](https://leetcode.com/problems/minimum-removals-to-balance-array/) | Medium | [Runtime(vary a lot), classic solution](./cpp/sliding_window/3634_minimum_removals_to_balance_array/) | Sort + sliding window (two pointers) / 🏁 Biweekly 162(Q2) |

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

### 🔤 String Processing (Total: 3 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0006 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | Medium | [Runtime(100%)](./cpp/string_processing/0006_zigzag_conversion/) | Simulation + direction control + reserve optimization |
| 0008 | [String To Interger Atoi](https://leetcode.com/problems/string-to-integer-atoi/) | Medium | [Runtime(100%)](./cpp/string_processing/0008_string_to_integer_atoi/) | Manual parse + overflow clamp + long long use |
| 0151 | [Reverse Words In A String](https://leetcode.com/problems/reverse-words-in-a-string/) | Medium | [Runtime(100%)](./cpp/string_processing/0151_reverse_words_in_a_string/) | Backward scan + substr + reserve optimization |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 💡 Tree DP / Path Sum (Total: 2 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0113 | [Path Sum II](https://leetcode.com/problems/path-sum-ii/) | Medium | [Runtime(100%)](./cpp/tree_dp_path_sum/0113_path_sum_ii/) | DFS + Backtracking |
| 0124 | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | Hard | [Runtime(100%)](./cpp/tree_dp_path_sum/0124_binary_tree_maximum_path_sum/) | DFS + Tree DP |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🌳 Tree Traversal (Total: 9 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0094 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0094_binary_tree_inorder_traversal/) | DFS recursion |
| 0101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0101_symmetric_tree/) | DFS recursion & BFS queue mirror check |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Medium | [Runtime(100%)](./cpp/tree_traversal/0102_binary_tree_level_order_traversal/) | BFS using queue |
| 0103 | [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | Medium | [Runtime(100%)](./cpp/tree_traversal/0103_binary_tree_zigzag_level_order_traversal/) | BFS with alternating direction |
| 0104 | [Maximum Depth Of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0104_maximum_depth_of_binary_tree/) | DFS recursion & BFS level count |
| 0110 | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0110_balanced_binary_tree/) | DFS + pruning, early exit on unbalanced |
| 0226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0226_invert_binary_tree/) | DFS recursion & BFS swap children |
| 0236 | [Lowest Common Ancestor Of A Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | Medium | [Runtime(~60%) classic solution](./cpp/tree_traversal/0236_lowest_common_ancestor_of_a_binary_tree/) | Post-order recursion (LCA logic) |
| 0257 | [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/) | Easy | [Runtime(100%)](./cpp/tree_traversal/0257_binary_tree_paths/) | DFS recursion, build path strings root→leaf |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---

### 🪝 Two Pointers (Total: 14 problems)
| # | Title | Difficulty | Solution Folder | Notes |
|:---:|:---:|:---:|:---:|:---:|
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | [Runtime(100%)](./cpp/two_pointers/0003_longest_substring_without_repeating_characters/) | Sliding window (brute-force, map, array) / O(n) optimized |
| 0015 | [3Sum](https://leetcode.com/problems/3sum/) | Medium | [Runtime(~53%), classic solution](./cpp/two_pointers/0015_3sum/) | Sort + two pointers / Skip duplicates / O(n²) |
| 0075 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | Medium | [Runtime(100%)](./cpp/two_pointers/0075_sort_colors/) | Dutch National Flag / Three pointers / In-place / O(n) |
| 0088 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Easy | [Runtime(100%)](./cpp/two_pointers/0088_merge_sorted_array/) | Two pointers from back / In-place merge / O(m+n) |
| 0142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | Medium | [Runtime(80-90%)](./cpp/two_pointers/0142_linked_list_cycle_ii/) | Fast-slow pointer to find cycle start |
| 0160 | [Intersection Of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Easy | [Runtime(~80%), classic solution](./cpp/two_pointers/0160_intersection_of_two_linked_lists/) | Two-pointer with list switching |
| 0167 | [Two Sum II Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Medium | [Runtime(100%)](./cpp/two_pointers/0167_two_sum_ii_input_array_is_sorted/) | Two-pointer / Sorted array |
| 0287 | [Find The Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | Medium | [Runtime(~70%) classic solution](./cpp/two_pointers/0287_find_the_duplicate_number/) | Floyd’s cycle (fast/slow) & Binary search |
| 0392 | [Is Subsequence](https://leetcode.com/problems/is-subsequence/) | Easy | [Runtime(100%)](./cpp/two_pointers/0392_is_subsequence/) | Two-pointer / String scan |
| 0524 | [Longest Word In Dictionary Through Deleting](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/) | Medium | [Runtime(100%)](./cpp/two_pointers/0524_longest_word_in_dictionary_through_deleting/) | Two-pointer subsequence check / Track longest + lexicographically smallest |
| 0633 | [Sum Of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/) | Medium | [Runtime(100%)](./cpp/two_pointers/0633_sum_of_square_numbers/) | Two pointers (0 ~ √c) / Check sum of squares |
| 0680 | [Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/) | Easy | [Runtime(sometimes 100%)](./cpp/two_pointers/0680_valid_palindrome_ii/) | Two-pointer with one deletion / Check substrings when mismatch |
| 0876 | [Middle Of The Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | Easy | [Runtime(100%)](./cpp/two_pointers/0876_middle_of_the_linked_list/) | Fast-slow pointer on Linked List |
| 3649 | [Number Of Perfect Pairs](https://leetcode.com/problems/number-of-perfect-pairs/) | Medium | [Runtime(vary a lot)](./cpp/two_pointers/3649_number_of_perfect_pairs/) | Sort + two pointers on absolute values / Count pairs satisfying y ≤ 2x / 🏁 Biweekly 163(Q2) |

[🔝 Back to Top](#leetcode-practice-in-cpp)

---
