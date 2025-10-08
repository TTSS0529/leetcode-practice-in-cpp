# 0646 - Maximum Length of Pair Chain

### 🧠 Idea
We want to find the **longest chain** of pairs `(a, b)` such that for each consecutive pairs `(a, b)` and `(c, d)` in the chain: **b < c**.

Key observation:  
- This is equivalent to the **activity selection / interval scheduling problem**.  
- **Greedy strategy** works: always pick the pair with the **smallest ending number** that can extend the chain.  
- Sort pairs by their **end value**, then iterate and greedily select non-overlapping pairs.

---

### 🛠️ Key Points
1. **Sort** `pairs` by `pair[1]` (end of pair) ascending.
2. Initialize:
   - `res = 1` → count of pairs in chain
   - `prev = pairs[0][1]` → end of the last selected pair
3. Iterate `i = 1..n-1`:
   - If `pairs[i][0] > prev` → valid to chain:
     - `++res`
     - `prev = pairs[i][1]`
4. Return `res`

> Note: This **greedy approach** gives the optimal solution because by always picking the smallest possible end, we leave as much room as possible for future pairs.

---

### ⏱️ Complexity

- **Time:**  
  - Sorting → **O(n log n)**  
  - Iteration → **O(n)**  
  - Total → **O(n log n)**
- **Space:**  
  - **O(1)** extra (besides sorting)
