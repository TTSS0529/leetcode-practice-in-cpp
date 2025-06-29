# 0239 - Sliding Window Maximum

### 🧠 Idea  
Maintain the maximum value within a sliding window of size `k`.

Two major approaches:
- **Brute-force (Heap + Delayed Deletion)**:  
  Use a max-heap (`priority_queue`) to keep track of window elements.  
  Use a hash map (`unordered_map`) to track elements that should be lazily removed from the heap.
- **Optimized (Monotonic Deque)**:  
  Maintain a decreasing deque of indices so that the front of the deque always holds the maximum.

---

### 🛠️ Key Points  
- **Brute-force** simulates deletion from a heap using a hash map to delay removal.  
- **Deque version** avoids cleanup:  
  - Maintains only useful indices (within range and potentially maximum)  
  - Pops smaller elements to preserve a decreasing order  
- Deque stores **indices**, not values, for easy boundary checks.  
- Maximum is always at `pq.top()` (heap) or `nums[dq.front()]` (deque).

---

### ⏱️ Complexity  

#### Brute-force (Heap):
- Time: O(n log k)  
- Space: O(k + n)

#### Optimized (Monotonic Deque):
- Time: O(n)  
- Space: O(k)

---

## 🆚 Summary

| Feature            | Brute-force Version (Heap) | Optimized Version (Deque) |
|--------------------|----------------------------|-----------------------------|
| Code Simplicity    | Medium                     | Medium                      |
| Performance        | Slower (heap rebalancing)  | Fastest (O(1) max access)   |
| Memory Usage       | O(k + n)                   | O(k)                        |
| Applicable To      | Sliding max problems       | Sliding max problems        |
| LeetCode Runtime   | ~20–40%                    | ~99%                        |

---

### ✅ When to Use Each
- Heap version is useful when:
  - You need a **generalized priority structure** (top-k, custom comparators, etc.)
  - You’re fine with a bit more overhead
- Deque version is preferred when:
  - You want **pure max/min sliding window**
  - You care about **performance and simplicity**

