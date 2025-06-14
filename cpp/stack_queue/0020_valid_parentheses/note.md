# 0020 - Valid Parentheses

### 🧠 Idea  
Use a stack to match opening and closing brackets. Push left brackets, pop and check when encountering right brackets.

### 🛠️ Key Points  
- Use `string::find` to map matching brackets.
- Always check `stack.empty()` before accessing `top()`.
- Final check: stack must be empty for a valid string.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(n) (stack usage)