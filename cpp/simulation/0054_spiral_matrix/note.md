# 0054 - Spiral Matrix

### 🧠 Idea  
Traverse the matrix layer by layer in a spiral order:  
- Traverse the top row from left to right  
- Traverse the right column from top to bottom  
- Traverse the bottom row from right to left  
- Traverse the left column from bottom to top  

After traversing each edge, shrink the boundaries inward until all elements are visited.

---

### 🛠️ Key Points  
- Maintain four boundary pointers: `up`, `down`, `left`, `right`.  
- After traversing each side, adjust the corresponding boundary inward.  
- Check boundary cross conditions to know when to stop.  
- Use `reserve` on the result vector to avoid reallocations.  
- Use a `while(true)` loop with break conditions or a `while(left <= right && up <= down)` loop.

---

### ⏱️ Complexity

| Version   | Time  | Space  |
|-----------|-------|--------|
| Standard  | O(m*n) | O(m*n) |

Where `m` and `n` are matrix dimensions.