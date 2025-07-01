# 0946 - Validate Stack Sequences

### 🧠 Idea  
Simulate stack operations using a real `std::stack<int>` to validate whether the `popped` sequence can be obtained from the `pushed` sequence.  
Whenever the top of the stack matches the next item in `popped`, we pop it. Otherwise, keep pushing from `pushed`.

---

### 🛠️ Key Points  
- Push from `pushed` until a match with `popped[j]` is found at the stack top.  
- Pop the stack when the top matches the next value in `popped`.  
- After `pushed` is exhausted, continue popping to check if the rest of `popped` can be matched.  
- This approach guarantees all operations are done in linear time.

---

### ⏱️ Complexity

| Metric        | Complexity    |
|---------------|---------------|
| Time          | O(n)          |
| Space         | O(n) (stack)  |

---
