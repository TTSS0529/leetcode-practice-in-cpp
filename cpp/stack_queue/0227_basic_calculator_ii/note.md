# 0227 - Basic Calculator II

## 🧠 Idea
We need to evaluate an arithmetic expression containing **`+ - * /`** with integer results.  
The key challenge is correctly handling **operator precedence**, where multiplication and division must be computed before addition and subtraction.

---

## 🛠️ Key Points
- Scan through the string and read numbers one by one.
- Maintain two running values:
  - A value that stores the **accumulated result of completed addition/subtraction segments**.
  - A value that stores the **current segment affected by multiplication or division**.
- When encountering `+` or `-`, finish the current segment and start a new one.
- When encountering `*` or `/`, continue updating the current segment because these operators have higher precedence.
- At the end, combine the accumulated segments to obtain the final result.

---

## 💡 Intuition
This approach mimics how we naturally compute arithmetic expressions:

- Multiplication and division are resolved immediately within the current segment.
- Addition and subtraction serve as boundaries between segments.

By separating evaluation into segments, we preserve precedence without needing a stack or complex parsing logic.

---

## ⏱️ Complexity
- **Time:** `O(n)` — single pass through the expression.
- **Space:** `O(1)` — only constant extra storage required.
