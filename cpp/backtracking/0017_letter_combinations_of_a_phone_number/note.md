# 0017 - Letter Combinations of a Phone Number

## 🧠 Idea

Given a digit string `digits` (2–9), each digit maps to a set of letters like on a phone keypad

We need to return **all possible letter combinations** these digits could represent.

This can be solved by **backtracking**:
- Treat each digit as a branching point.
- Build combinations one letter at a time.
- When the length equals `digits.size()`, store the result.

## 🔁 Step-by-step

1. If `digits` is empty → return `{}`.
2. Prepare a dictionary mapping from digit to possible letters.
3. Use a helper function `backtrack` with:
   - Parameters: `digits`, mapping `dic`, result `res`, current string `comb`, current position `index`.
4. Base case: If `comb.size() == digits.size()`:
   - Append `comb` to `res` and return.
5. Otherwise:
   - For each letter in `dic[digits[index]]`:
     - Append letter to `comb`.
     - Recursively call `backtrack` with `index + 1`.
     - Remove last letter (backtrack).

## 🛠️ Key Points

- Classic **DFS/backtracking** pattern: Choose → Explore → Unchoose.
- Avoid copying containers inside recursion — use references.
- Branching factor ≤ 4 (digit '7' and '9'), recursion depth = `digits.size()`.

## ⏱️ Complexity

- **Time:** O(4ⁿ × n) — at most 4 choices per digit, each combination length is `n`.
- **Space:** O(n) — recursion stack depth, excluding result storage.
