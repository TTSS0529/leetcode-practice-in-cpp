# 0142 - Linked List Cycle II

### 🧠 Idea  
Two approaches to find the **start of a cycle in a linked list**:  
- **Brute-force**: store visited nodes in a hash set, and return the first one that repeats.  
- **Optimized**: use Floyd’s Cycle Detection (fast & slow pointers) to detect the cycle and locate its entry point.

---

### 🛠️ Key Points  
- Brute-force is simple but uses extra memory.  
- Optimized method is space-efficient and based on pointer movement math.  
- Fast pointer moves 2 steps, slow 1 step. When they meet, restart one at head—meeting point is cycle start.  
- Works only on singly linked lists with possible cycles.  

---

### ⏱️ Complexity  
- Brute-force:  
  - Time: O(n)  
  - Space: O(n)  
- Optimized:  
  - Time: O(n)  
  - Space: O(1)

---

## 🆚 Summary

| Feature            | Brute-force Version     | Optimized Version (Floyd) |
|--------------------|--------------------------|----------------------------|
| Code Simplicity    | High                     | Medium                     |
| Performance        | Slower (hashing)         | Excellent                  |
| Memory Usage       | O(n)                     | O(1)                       |
| Applicable To      | Linked list with cycles  | Linked list with cycles    |
| LeetCode Runtime   | ~20%                     | 80-90%                      |
