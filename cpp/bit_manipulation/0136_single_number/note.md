# 0136 - Single Number

## 🧠 Idea

Use **bit manipulation (XOR)** to identify the element that appears **exactly once**, while every other element appears **twice**.

- XOR has two useful properties:
  - `a ^ a = 0` (same numbers cancel out)
  - `a ^ 0 = a`
- Therefore, XOR-ing all numbers together will cancel out the duplicates, leaving only the *unique* number.

## 🔁 Step-by-step

1. Initialize `res = 0`.
2. Iterate through the array:
   - For each `n`, do `res ^= n`.
3. After the loop, `res` is the number that appears exactly once.

## 🛠️ Key Points

- XOR cancels out pairs of equal numbers → ideal for this problem setup.
- No extra memory or data structures are required.
- Elegant one-pass solution.

## ⏱️ Complexity

- **Time:** O(n) — traverse the array once.
- **Space:** O(1) — only a single integer is used.
