# 0665 - Non-decreasing Array

## 🧠 Idea

We are asked to determine if an array can be made **non-decreasing** by modifying **at most one element**.

A non-decreasing array means:  
`nums[i] <= nums[i+1]` for all valid `i`.

**Key insight:**  

- At most **one violation** (`nums[i] > nums[i+1]`) is allowed.  
- When such a violation occurs, we can either:
  1. **Lower `nums[i]`** (make it equal to `nums[i+1]`), or  
  2. **Raise `nums[i+1]`** (make it equal to `nums[i]`).  

- The correct choice depends on whether modifying `nums[i]` would break the relation with `nums[i-1]`.

---

## 🔁 Step-by-step

1. Traverse the array and count the number of violations where `nums[i] > nums[i+1]`.

2. If violations > 1 → return `false`.

3. If exactly one violation at index `i`:
   - If `i == 0` or `nums[i-1] <= nums[i+1]`,  
     modify `nums[i]` (lower it).
   - Otherwise, modify `nums[i+1]` (raise it).

4. If traversal completes with ≤ 1 modification → return `true`.

---

## 🛠️ Key Points

- **Greedy choice:** Fix violations as they appear, at most once.  
- **Local check:** Look at `nums[i-1]`, `nums[i]`, `nums[i+1]` to decide which element to change.  
- **Early termination:** More than one violation → no solution.

---

## ⏱️ Complexity

- **Time:** O(n) — single pass through the array.  
- **Space:** O(1) — in-place modifications only.
