# 0876 - Middle of the Linked List

### 🧠 Idea  
Traverse the list with one pointer `tail`, and move `middle` forward every 2 steps.  
By counting how many nodes we’ve passed, we ensure `middle` ends up at the true middle.

### 🛠️ Key Points  
- Use a single pass and count nodes.  
- Move `middle` only when count is odd.  
- Equivalent to fast/slow pointer but avoids managing two independent speeds.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(1)

---

## 🆚 Summary

| Feature            | Version 1                      |
|--------------------|--------------------------------|
| Code Simplicity    | Very High                      |
| Performance        | Excellent                      |
| Memory Usage       | O(1)                           |
| Technique          | Single pass + slow update logic |
| LeetCode Runtime   | 100%                           |
