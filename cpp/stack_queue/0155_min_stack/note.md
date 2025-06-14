# 0155 - Min Stack

### 🧠 Idea  
Maintain an auxiliary stack (or vector) to keep track of current minimums as values are pushed and popped.

### 🛠️ Key Points  
- `getMin()` can return in O(1) time by tracking minimums separately.
- Each time a value ≤ current min is pushed, also push it to `_min`.
- When popping, compare with `_min.top()` to keep `_min` in sync.
- Retained `stack` implementation for simplicity and STL alignment.
- Commented out `vector` version remains in header for optional optimization.
- **Runtime:** Stack-based version beats ~45% of submissions — not top-tier, but acceptable given simplicity.
- **Implementation Choice:**  
  - Although `vector` version is also implemented (and usually performs slightly better in practice),  
    the `stack` version is retained as the active one to keep the code consistent with STL semantics and simplify testing.  
  - The `vector` implementation is preserved in comments for easy benchmarking or future optimization.