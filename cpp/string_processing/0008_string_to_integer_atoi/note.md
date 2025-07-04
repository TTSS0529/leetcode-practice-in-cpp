# 0008 - String to Integer (atoi)

### 🧠 Idea  
Manually simulate the behavior of `atoi()` by parsing the string character by character.  
Key steps:
- Skip leading spaces
- Read optional sign (`+` or `-`)
- Accumulate digits into a numeric value
- Clamp the result to `INT_MAX` or `INT_MIN` on overflow

Using `long long` to store intermediate values ensures that we can safely detect overflow before returning.

---

### 🛠️ Key Points  
- Leading whitespace is skipped with a simple while loop.
- Only the first sign character (`+` or `-`) is considered; the rest is ignored.
- Characters are parsed as long as they are digits.
- Overflow is checked during each iteration (before casting to `int`).
- `std::numeric_limits<int>::max()` and `.min()` are used for correct clamping bounds.

---

### ⏱️ Complexity  
- Time: O(n)  
  Scans the string once, digit by digit.

- Space: O(1)  
  Only a few variables are used (no extra memory allocation).

---

## 🆚 Summary

| Feature             | This Implementation             |
|---------------------|----------------------------------|
| Handles Whitespace  | ✅ Yes                           |
| Handles Sign        | ✅ Yes (`+` / `-`)               |
| Overflow Protection | ✅ Yes (via `long long`)         |
| Runtime Efficiency  | 🚀 Fast (Runtime ~100%)          |
| Memory Efficiency   | 💡 O(1) space                    |
| LeetCode Category   | Simulation / String Parsing      |
