# 🏁 LeetCode Contest Review

---

## 🔸 Biweekly Contest 163 (2025-08-16)

- **Solved**: 0 / 4
- **Score**: 0
- **Rank**: 18869
- **Status**: ✅ 4th contest

### 📘 Summary

| # | Title | Status | Notes |
|:--:|:------|:--------|:------|
| 3649 | [Number Of Perfect Pairs](./cpp/two_pointers/3649_number_of_perfect_pairs/) | ❌ | Sort + two pointers on absolute values / Count pairs satisfying y ≤ 2x |

### 🧠 
- Simplify the mathematical condition(3649): complex **min/max constraints** can be reduced to a **simple inequality** on a sorted array, then efficiently count pairs using **two pointers**.

---

## 🔸 Biweekly Contest 162 (2025-08-02)

- **Solved**: 2 / 4
- **Score**: 7
- **Rank**: 14445
- **Status**: ✅ 3th contest

### 📘 Summary

| # | Title | Status | Notes |
|:--:|:------|:--------|:------|
| 3633 | [Earlies Finish Time For Land And Water Rides I](./cpp/simulation/3633_earlies_finish_time_for_land_and_water_rides_i/) | ✅ | Brute-force simulate both orders (land→water / water→land) |
| 3634 | [Minimum Removals To Balance Array](./cpp/sliding_window/3634_minimum_removals_to_balance_array/) | ✅ | Sort + sliding window (two pointers) |
| 3635 | [Earlies Finish Time For Land And Water Rides II](./cpp/greedy/3635_earlies_finish_time_for_land_and_water_rides_ii/) | ❌ | Greedy on earliest finish time in both orders (land→water / water→land) |
| 3636 | Threshold Majority Queries | ❌ | To revisit (Range frequency queries with randomized sampling) |

### 🧠 Lessons Learned
- Reinforced the idea that **brute-force pair enumeration** is acceptable for small inputs (3633), but **greedy strategies** using earliest finish times are essential for scaling to larger inputs (3635).
- Gained experience distinguishing when full pair comparisons are necessary `vs` when **minimizing over one dimension** suffices for correctness and performance.
- Learned that for ratio-based subarray conditions (3634), sorting combined with a **sliding window (two pointers)** is a powerful technique for optimizing performance — avoids unnecessary enumeration while guaranteeing correctness.
> ⚠️ **Note:** Problem 3636 requires advanced techniques such as **Mo’s algorithm**, **randomized sampling**, and **complex range frequency queries**.  
> This problem is relatively challenging and involves probabilistic algorithms that are beyond standard interview preparations.  
> Given the current focus on strengthening core algorithmic skills, I have decided to temporarily set this problem aside.  
> I plan to revisit it later after consolidating foundational topics and exploring more **advanced range query and randomized algorithms**.

---

## 🔸 Biweekly Contest 161 (2025-07-19)

- **Solved**: 2 / 4  
- **Score**: 8  
- **Rank**: 8277
- **Status**: ✅ Second contest

### 📘 Summary

| # | Title | Status | Notes |
|:--:|:------|:--------|:------|
| 3618 | [Split Array By Prime Indices](./cpp/math/3618_split_array_by_prime_indices/) | ✅ | Array splitting based on prime indices, optimized with sieve |
| 3619 | [Count Islands With Total Value Divisible By K](./cpp/flood_fill_connected_components/3619_count_islands_with_total_value_divisible_by_k/) | ✅ | Flood fill via DFS and BFS comparison |
| 3620 | [Network Recovery Pathways](./cpp/graph_topological_sort/3620_network_recovery_pathways/) | ❌ | DAG + Topological DP + Binary Search on edge weights |
| 3621 | Number of Integers With Popcount-Depth Equal to K I | ❌ | To revisit (Digit DP with bitcount-depth constraint) |

### 🧠 Lessons Learned
- Reinforced the **Sieve of Eratosthenes** to efficiently handle prime checks in \(O(n \log \log n)\), avoiding the naive \(O(n \sqrt{n})\) approach.
- Practiced **grid flood fill (DFS vs BFS)**, confirming DFS is faster on typical LeetCode constraints due to better cache locality and less queue overhead.
- Learned **DAG shortest path with topological DP**, combined with **binary search on unique edge weights** to optimize feasibility checks to `O((V + E) log E)`.
> ⚠️ **Note:** Problem 3621 involves advanced algorithmic concepts such as **Digit DP combined with popcount-depth constraints**.  
> Since this topic is relatively niche and not directly aligned with current interview-focused practice, I have decided to temporarily set this problem aside.  
> I plan to revisit it later when exploring more **Hard-level Digit DP problems** to strengthen my understanding of advanced counting techniques.

---

## 🔸 Biweekly Contest 160 (2025-07-05)

- **Solved**: 2 / 4  
- **Score**: 8  
- **Rank**: 8096  
- **Status**: ✅ First-ever contest

### 📘 Summary

| # | Title | Status | Notes |
|:--:|:------|:--------|:------|
| 3602 | [Hexadecimal And Hexatrigesimal Conversion](./cpp/simulation/3602_hexadecimal_and_hexatrigesimal_conversion/) | ✅ | Base Conversion |
| 3603 | [Minimum Cost Path With Alternating Directions II](./cpp/dynamic_programming/3603_minimum_cost_path_with_alternating_direction_ii/) | ✅ | Grid DP with custom movement rule |
| 3604 | Minimum Time To Reach Destination In Directed Graph | ❌ | To revisit (BFS with time constraints) |
| 3605 | Minimum Stability Factor Of Array | ❌ | To revisit (GCD + sliding window) |

### 🧠 Lessons Learned
- Practice high-base conversion logic and corner case handling  
- Learn how to model cost alternation using dynamic programming on grids  
- Reinforce BFS with time-constrained edge usage and (node, time) state  
- Study how to combine GCD with sliding window and binary search  
- Improve overall graph modeling and state design skills
> ⚠️ **Note:** Problems 3604 and 3605 involve advanced algorithmic concepts such as BFS with time constraints and number theory techniques (GCD combined with sliding window and binary search). Due to the current limited familiarity with these topics, I have decided to temporarily set these problems aside. I plan to revisit and solve them after further strengthening my foundational knowledge in graph algorithms and number theory.

---
