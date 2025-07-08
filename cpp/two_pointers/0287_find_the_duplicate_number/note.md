# 0287 - Find the Duplicate Number

### 🧠 Idea  
We aim to find **the only duplicated number** in an array of size `n + 1`, with all values in the range `[1, n]`.

Two efficient solutions exist:  
- **Cycle Detection (Floyd’s Tortoise and Hare)**: Model the array as a linked list where `nums[i]` is the next pointer.  
- **Binary Search on Value Range**: Use the pigeonhole principle and count how many numbers are ≤ mid.

---

### 🛠️ Key Points  

#### 🐢 Cycle Detection (Floyd)  
- Treat `nums[i]` as a pointer to the next node.  
- Since a duplicate creates a loop, we can detect a cycle and find its entry point.  
- First phase: use fast/slow pointers to find a meeting point.  
- Second phase: restart one pointer from index 0, the meeting point is the duplicate.

#### 🔍 Binary Search on Value Range  
- Binary search on value range `[1, n]`, not indices.  
- Count how many numbers are ≤ `mid`.  
- If `count > mid`, the duplicate lies in the left half.  
- Relies on pigeonhole principle: more than `mid` elements in range `[1, mid]` → duplicate must exist.

---

### ⏱️ Complexity  

| Method              | Time            | Space   | Notes                          |
|---------------------|------------------|---------|---------------------------------|
| Floyd Cycle Detect  | `O(n)`          | `O(1)`  | Fastest runtime (~70%)         |
| Binary Search       | `O(n log n)`    | `O(1)`  | More readable but a bit slower |

---

## 🆚 Summary

| Feature            | Cycle Detection       | Binary Search           |
|--------------------|------------------------|--------------------------|
| Code Simplicity    | Medium                 | High                     |
| Performance        | Excellent              | Good                     |
| Memory Usage       | O(1)                   | O(1)                     |
| Applicable To      | Requires value-linked structure | General counting |
| LeetCode Runtime   | ~70%+                  | ~30%+                    |
