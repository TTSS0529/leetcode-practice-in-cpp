# 0241 - Different Ways to Add Parentheses  

### 🧠 Idea  
We want **all possible results** of an arithmetic expression by adding parentheses in different ways.  

Each operator (`+`, `-`, `*`) can be seen as a **split point**:  
- Recursively compute results of **left** and **right** parts  
- Combine all pairs `(left, right)` with the operator  

This is a **Divide and Conquer** problem with **memoization** to avoid repeated computation.  

---

### 🛠️ Key Points  
- Each operator divides the string into two subexpressions  
- Base case: expression is a **pure number** → return `[stoi(expression)]`  
- Recursively compute left/right results and combine them  
- Use a **cache (`unordered_map`)** to store computed results for subexpressions  

---

### ⏱️ Complexity  

- **Time:** Exponential in number of operators → `O(2^n)` in worst case  
- **Space:** `O(n)` recursion depth + memoization cache  
