# 0154 - Find Minimum in Rotated Sorted Array II

### 🧠 Idea  
We aim to find the **minimum element** in a **rotated sorted array** that **may contain duplicates**.

Due to the presence of duplicates, standard binary search needs to be adapted to handle ambiguity.

---

### 🛠️ Key Points  

#### 🔍 Modified Binary Search  
- Use two pointers `left` and `right` to narrow down the search range.  
- At each step:
  - If `nums[middle] < nums[right]`: the minimum lies **in the left half** (including `middle`).
  - If `nums[middle] > nums[right]`: the minimum lies **in the right half** (excluding `middle`).
  - If `nums[middle] == nums[right]`: can't decide — safely **reduce the right bound** (`--right`).

#### ⚠️ Why `--right`?  
- When `nums[middle] == nums[right]`, we **cannot determine** whether the minimum is on the left or right.
- In this case, **shrinking the right bound** by one doesn't eliminate the minimum, just skips over a duplicate.

---

### ⏱️ Complexity  

| Operation        | Time                | Space  | Notes                                  |
|------------------|---------------------|--------|-----------------------------------------|
| Binary Search    | `O(log n)` → `O(n)` | `O(1)` | Worst case (all duplicates): linear time |