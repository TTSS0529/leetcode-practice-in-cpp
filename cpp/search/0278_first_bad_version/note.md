# 0278 - First Bad Version

### 🧠 Idea  
We are given a version control system with `n` versions, and one of them is the **first bad version**.  
Once a version is bad, all following versions are bad too.  
Using **binary search**, we can efficiently locate the first bad version.

---

### 🛠️ Key Points  
- Maintain two pointers: `left` and `right` as the current search range.
- Compute the middle index using `left + (right - left) / 2` to **avoid overflow**.
- Call `isBadVersion(mid)` to determine whether to search the left or right half:
  - If `mid` is bad, the first bad version is at or before `mid`, so update `right = mid`.
  - Otherwise, update `left = mid + 1`.
- When `left == right`, we have found the first bad version.
- Avoid unnecessary calls to `isBadVersion()` — each call is costly.

---

### ⏱️ Complexity

| Metric     | Brute Force Version | Optimized Version |
|------------|---------------------|--------------------|
| Time       | O(log n)            | O(log n)           |
| Space      | O(1)                | O(1)               |
| API Calls  | Up to 2 per loop    | 1 per loop         |

---

### 🆚 Summary

| Feature         | Brute Force Version                            | Optimized Version                        |
|------------------|------------------------------------------------|-------------------------------------------|
| Code Style       | More verbose, checks `mid - 1`                 | Clean and minimal                         |
| Search Method    | Binary Search + Explicit Boundary Check        | Classic Lower Bound Binary Search         |
| Overflow-Safe    | ✅ Yes (`left + (right - left) / 2`)           | ✅ Yes (`left + (right - left) / 2`)       |
| Performance      | ❌ Redundant API calls (up to 2 per loop)      | ✅ Only 1 API call per loop                |
| Robustness       | ✅ Handles edge case at `mid == 1`             | ✅ Logic handles edge cases cleanly        |
