# 0394 - Decode String

### 🧠 Idea  
Use recursion or stack to decode nested encoded strings like `"3[a2[c]]"`.

### 🛠️ Key Points  
- Recursion version uses an index reference to parse string, naturally handles nested brackets.  
- Stack version simulates recursion by pushing `(repeatCount, currentString)` pairs.  
- When encountering `]`, pop stack, repeat current substring, and append to previous string.  
- Carefully handle multi-digit numbers for repeat counts.  
- Both approaches run efficiently (runtime ~100%) and handle deep nesting.  
- Recursion is concise; stack version is iterative and explicit about state management.